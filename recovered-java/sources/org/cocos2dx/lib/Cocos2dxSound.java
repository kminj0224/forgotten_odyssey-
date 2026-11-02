package org.cocos2dx.lib;

import android.content.Context;
import android.media.SoundPool;
import android.os.Vibrator;
import android.util.Log;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class Cocos2dxSound {
    private static final int MAX_SIMULTANEOUS_STREAMS_DEFAULT = 5;
    private static final int SOUND_PRIORITY = 1;
    private static final int SOUND_QUALITY = 5;
    private static final float SOUND_RATE = 1.0f;
    private static final String TAG = "Cocos2dxSound";
    private final int INVALID_SOUND_ID = -1;
    private final int INVALID_STREAM_ID = -1;
    private Context mContext;
    private float mLeftVolume;
    private HashMap<String, Integer> mPathSoundIDMap;
    private float mRightVolume;
    private HashMap<Integer, Integer> mSoundIdStreamIdMap;
    private SoundPool mSoundPool;

    public Cocos2dxSound(Context context) {
        this.mContext = context;
        initData();
    }

    public int preloadEffect(String path) {
        if (this.mPathSoundIDMap.get(path) != null) {
            return this.mPathSoundIDMap.get(path).intValue();
        }
        int soundId = createSoundIdFromAsset(path);
        if (soundId != -1) {
            this.mSoundIdStreamIdMap.put(Integer.valueOf(soundId), -1);
            this.mPathSoundIDMap.put(path, Integer.valueOf(soundId));
            return soundId;
        }
        return soundId;
    }

    public void unloadEffect(String path) {
        Integer soundId = this.mPathSoundIDMap.remove(path);
        if (soundId != null) {
            this.mSoundPool.unload(soundId.intValue());
            this.mSoundIdStreamIdMap.remove(soundId);
        }
    }

    public int playEffect(final String path, final boolean isLoop) {
        Integer soundId = this.mPathSoundIDMap.get(path);
        if (soundId != null) {
            this.mSoundPool.stop(soundId.intValue());
            int streamId = this.mSoundPool.play(soundId.intValue(), this.mLeftVolume, this.mRightVolume, 1, isLoop ? -1 : 0, SOUND_RATE);
            this.mSoundIdStreamIdMap.put(soundId, Integer.valueOf(streamId));
        } else {
            soundId = Integer.valueOf(preloadEffect(path));
            if (soundId.intValue() == -1) {
                return -1;
            }
            this.mSoundPool.setOnLoadCompleteListener(new SoundPool.OnLoadCompleteListener() { // from class: org.cocos2dx.lib.Cocos2dxSound.1
                @Override // android.media.SoundPool.OnLoadCompleteListener
                public void onLoadComplete(SoundPool soundPool, int sampleId, int status) {
                    if (status == 0) {
                        Cocos2dxSound.this.playEffect(path, isLoop);
                    }
                }
            });
        }
        return soundId.intValue();
    }

    public void stopEffect(int soundId) {
        Integer streamId = this.mSoundIdStreamIdMap.get(Integer.valueOf(soundId));
        if (streamId != null && streamId.intValue() != -1) {
            this.mSoundPool.stop(streamId.intValue());
            this.mPathSoundIDMap.remove(Integer.valueOf(soundId));
        }
    }

    public void pauseEffect(int soundId) {
        Integer streamId = this.mSoundIdStreamIdMap.get(Integer.valueOf(soundId));
        if (streamId != null && streamId.intValue() != -1) {
            this.mSoundPool.pause(streamId.intValue());
            this.mPathSoundIDMap.remove(Integer.valueOf(soundId));
        }
    }

    public void resumeEffect(int soundId) {
        Integer streamId = this.mSoundIdStreamIdMap.get(Integer.valueOf(soundId));
        if (streamId != null && streamId.intValue() != -1) {
            this.mSoundPool.resume(streamId.intValue());
            this.mPathSoundIDMap.remove(Integer.valueOf(soundId));
        }
    }

    public void pauseAllEffects() {
        pauseOrResumeAllEffects(true);
    }

    public void resumeAllEffects() {
        pauseOrResumeAllEffects(false);
    }

    public void stopAllEffects() {
        for (Map.Entry<Integer, Integer> entry : this.mSoundIdStreamIdMap.entrySet()) {
            int soundId = entry.getKey().intValue();
            stopEffect(soundId);
        }
    }

    public float getEffectsVolume() {
        return (this.mLeftVolume + this.mRightVolume) / 2.0f;
    }

    public void setEffectsVolume(float volume) {
        if (volume < 0.0f) {
            volume = 0.0f;
        }
        if (volume > SOUND_RATE) {
            volume = SOUND_RATE;
        }
        this.mRightVolume = volume;
        this.mLeftVolume = volume;
        for (Map.Entry<Integer, Integer> entry : this.mSoundIdStreamIdMap.entrySet()) {
            this.mSoundPool.setVolume(entry.getValue().intValue(), this.mLeftVolume, this.mRightVolume);
        }
    }

    public void end() {
        this.mSoundPool.release();
        this.mPathSoundIDMap.clear();
        this.mSoundIdStreamIdMap.clear();
        initData();
    }

    public int createSoundIdFromAsset(String path) {
        try {
            int soundId = this.mSoundPool.load(this.mContext.getAssets().openFd(path), 0);
            return soundId;
        } catch (Exception e) {
            Log.e(TAG, "error: " + e.getMessage(), e);
            return -1;
        }
    }

    public void vibrate(long time) {
        Vibrator v = (Vibrator) this.mContext.getSystemService("vibrator");
        v.vibrate(time);
    }

    private void initData() {
        this.mSoundIdStreamIdMap = new HashMap<>();
        this.mSoundPool = new SoundPool(5, 3, 5);
        this.mPathSoundIDMap = new HashMap<>();
        this.mLeftVolume = 0.5f;
        this.mRightVolume = 0.5f;
    }

    private void pauseOrResumeAllEffects(boolean isPause) {
        for (Map.Entry<Integer, Integer> entry : this.mSoundIdStreamIdMap.entrySet()) {
            int soundId = entry.getKey().intValue();
            if (isPause) {
                pauseEffect(soundId);
            } else {
                resumeEffect(soundId);
            }
        }
    }
}

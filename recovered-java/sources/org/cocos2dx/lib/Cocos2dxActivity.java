package org.cocos2dx.lib;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.PowerManager;
import android.os.Process;
import android.provider.Settings;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.KeyEvent;
import com.example.android.trivialdrivesample.util.IabHelper;
import com.example.android.trivialdrivesample.util.IabResult;
import com.example.android.trivialdrivesample.util.Inventory;
import com.example.android.trivialdrivesample.util.Purchase;
import com.google.android.vending.licensing.AESObfuscator;
import com.google.android.vending.licensing.LicenseChecker;
import com.google.android.vending.licensing.LicenseCheckerCallback;
import com.google.android.vending.licensing.ServerManagedPolicy;
import java.util.Locale;

/* JADX INFO: loaded from: classes.dex */
public class Cocos2dxActivity extends Activity {
    public static String AndoridID = null;
    static final String CP100 = "bcp100";
    static final String CP1300 = "bcp1300";
    static final String CP15000 = "bcp15000";
    static final String CP4000 = "bcp4000";
    static final String CP600 = "bcp600";
    static final String CP6200 = "bcp6200";
    private static final int HANDLER_SHOW_DIALOG = 1;
    static final int RC_REQUEST = 10001;
    static final String SKU_GAS = "cp100";
    static final String SKU_INFINITE_GAS = "infinite_gas";
    static final String SKU_PREMIUM = "premium";
    static final String TAG = "TrivialDrive";
    static final int TANK_MAX = 4;
    static final int VALIDATION_FAULT_SET = 2;
    static final int VALIDATION_NOT_SET = 0;
    static final int VALIDATION_SUCCESS_SET = 1;
    private static Cocos2dxAccelerometer accelerometer;
    private static Cocos2dxMusic backgroundMusicPlayer;
    private static Cocos2dxDeviceData deviceData;
    private static Handler handler;
    public static Cocos2dxActivity instance;
    private static IabHelper mHelper;
    static PowerManager.WakeLock mWakeLock;
    private static String packageName;
    private static Cocos2dxSound soundPlayer;
    private LicenseChecker mChecker;
    private LicenseCheckerCallback mLicenseCheckerCallback;
    int mTank;
    private static boolean accelerometerEnabled = false;
    public static int NetSucces = 0;
    public static int b_Rating = 0;
    public static int NetError = 0;
    public static int returnCP = 0;
    public static int BuyCP = 0;
    private static String PID = "";
    private static final byte[] SALT = {-46, 65, 30, -128, -103, -57, 74, -64, 51, 88, -95, -45, 77, -117, -36, -113, -11, 32, -64, 89};
    static int mValidation = 0;
    boolean mIsPremium = false;
    boolean mSubscribedToInfiniteGas = false;
    public Handler moveStore = new Handler() { // from class: org.cocos2dx.lib.Cocos2dxActivity.1
        @Override // android.os.Handler
        public void handleMessage(Message msg) {
            int Num = msg.what;
            if (Num == 0) {
                new AlertDialog.Builder(Cocos2dxActivity.instance).setTitle("★★리뷰를 적어 주세요★★").setMessage("리뷰를 적어주신 분들께는 라파엘 캐릭터를선물로 드립니다.").setPositiveButton("이동", new DialogInterface.OnClickListener() { // from class: org.cocos2dx.lib.Cocos2dxActivity.1.1
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialog, int which) {
                        Cocos2dxActivity.instance.startActivity(new Intent("android.intent.action.VIEW", Uri.parse("market://details?id=org.cocos2dx.ForgottenOdyssey")));
                        Cocos2dxActivity.b_Rating = 1;
                    }
                }).setNegativeButton("아니요", new DialogInterface.OnClickListener() { // from class: org.cocos2dx.lib.Cocos2dxActivity.1.2
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialog, int which) {
                    }
                }).show();
            }
        }
    };
    IabHelper.QueryInventoryFinishedListener mGotInventoryListener = new IabHelper.QueryInventoryFinishedListener() { // from class: org.cocos2dx.lib.Cocos2dxActivity.2
        @Override // com.example.android.trivialdrivesample.util.IabHelper.QueryInventoryFinishedListener
        public void onQueryInventoryFinished(IabResult result, Inventory inventory) {
            Log.d(Cocos2dxActivity.TAG, "Query inventory finished.");
            if (!result.isFailure()) {
                Cocos2dxActivity.PID = Cocos2dxActivity.CP100;
                Purchase gasPurchase = inventory.getPurchase(Cocos2dxActivity.PID);
                if (gasPurchase == null || !Cocos2dxActivity.this.verifyDeveloperPayload(gasPurchase)) {
                    Cocos2dxActivity.PID = Cocos2dxActivity.CP600;
                    Purchase gasPurchase2 = inventory.getPurchase(Cocos2dxActivity.PID);
                    if (gasPurchase2 == null || !Cocos2dxActivity.this.verifyDeveloperPayload(gasPurchase2)) {
                        Cocos2dxActivity.PID = Cocos2dxActivity.CP1300;
                        Purchase gasPurchase3 = inventory.getPurchase(Cocos2dxActivity.PID);
                        if (gasPurchase3 == null || !Cocos2dxActivity.this.verifyDeveloperPayload(gasPurchase3)) {
                            Cocos2dxActivity.PID = Cocos2dxActivity.CP4000;
                            Purchase gasPurchase4 = inventory.getPurchase(Cocos2dxActivity.PID);
                            if (gasPurchase4 == null || !Cocos2dxActivity.this.verifyDeveloperPayload(gasPurchase4)) {
                                Cocos2dxActivity.PID = Cocos2dxActivity.CP6200;
                                Purchase gasPurchase5 = inventory.getPurchase(Cocos2dxActivity.PID);
                                if (gasPurchase5 == null || !Cocos2dxActivity.this.verifyDeveloperPayload(gasPurchase5)) {
                                    Cocos2dxActivity.PID = Cocos2dxActivity.CP15000;
                                    Purchase gasPurchase6 = inventory.getPurchase(Cocos2dxActivity.PID);
                                    if (gasPurchase6 != null && Cocos2dxActivity.this.verifyDeveloperPayload(gasPurchase6)) {
                                        Log.d(Cocos2dxActivity.TAG, "We have gas. Consuming it.");
                                        Cocos2dxActivity.returnCP = 15000;
                                        Cocos2dxActivity.mHelper.consumeAsync(inventory.getPurchase(Cocos2dxActivity.PID), Cocos2dxActivity.this.mConsumeFinishedListener);
                                        return;
                                    }
                                    Log.d(Cocos2dxActivity.TAG, "Initial inventory query finished; enabling main UI.");
                                    return;
                                }
                                Log.d(Cocos2dxActivity.TAG, "We have gas. Consuming it.");
                                Cocos2dxActivity.returnCP = 6200;
                                Cocos2dxActivity.mHelper.consumeAsync(inventory.getPurchase(Cocos2dxActivity.PID), Cocos2dxActivity.this.mConsumeFinishedListener);
                                return;
                            }
                            Log.d(Cocos2dxActivity.TAG, "We have gas. Consuming it.");
                            Cocos2dxActivity.returnCP = 4000;
                            Cocos2dxActivity.mHelper.consumeAsync(inventory.getPurchase(Cocos2dxActivity.PID), Cocos2dxActivity.this.mConsumeFinishedListener);
                            return;
                        }
                        Log.d(Cocos2dxActivity.TAG, "We have gas. Consuming it.");
                        Cocos2dxActivity.returnCP = 1300;
                        Cocos2dxActivity.mHelper.consumeAsync(inventory.getPurchase(Cocos2dxActivity.PID), Cocos2dxActivity.this.mConsumeFinishedListener);
                        return;
                    }
                    Log.d(Cocos2dxActivity.TAG, "We have gas. Consuming it.");
                    Cocos2dxActivity.returnCP = 600;
                    Cocos2dxActivity.mHelper.consumeAsync(inventory.getPurchase(Cocos2dxActivity.PID), Cocos2dxActivity.this.mConsumeFinishedListener);
                    return;
                }
                Log.d(Cocos2dxActivity.TAG, "We have gas. Consuming it.");
                Cocos2dxActivity.returnCP = 100;
                Cocos2dxActivity.mHelper.consumeAsync(inventory.getPurchase(Cocos2dxActivity.PID), Cocos2dxActivity.this.mConsumeFinishedListener);
            }
        }
    };
    IabHelper.OnIabPurchaseFinishedListener mPurchaseFinishedListener = new IabHelper.OnIabPurchaseFinishedListener() { // from class: org.cocos2dx.lib.Cocos2dxActivity.3
        @Override // com.example.android.trivialdrivesample.util.IabHelper.OnIabPurchaseFinishedListener
        public void onIabPurchaseFinished(IabResult result, Purchase purchase) {
            Log.d(Cocos2dxActivity.TAG, "Purchase finished: " + result + ", purchase: " + purchase);
            Log.d(Cocos2dxActivity.TAG, "OnIabPurchaseFinishedListener");
            if (!result.isFailure() && Cocos2dxActivity.this.verifyDeveloperPayload(purchase)) {
                Cocos2dxActivity.PID = Cocos2dxActivity.CP100;
                if (!purchase.getSku().equals(Cocos2dxActivity.PID)) {
                    Cocos2dxActivity.PID = Cocos2dxActivity.CP600;
                    if (!purchase.getSku().equals(Cocos2dxActivity.PID)) {
                        Cocos2dxActivity.PID = Cocos2dxActivity.CP1300;
                        if (!purchase.getSku().equals(Cocos2dxActivity.PID)) {
                            Cocos2dxActivity.PID = Cocos2dxActivity.CP4000;
                            if (!purchase.getSku().equals(Cocos2dxActivity.PID)) {
                                Cocos2dxActivity.PID = Cocos2dxActivity.CP6200;
                                if (!purchase.getSku().equals(Cocos2dxActivity.PID)) {
                                    Cocos2dxActivity.PID = Cocos2dxActivity.CP15000;
                                    if (purchase.getSku().equals(Cocos2dxActivity.PID)) {
                                        Cocos2dxActivity.BuyCP = 15000;
                                        Cocos2dxActivity.this.nativeSetCP(Cocos2dxActivity.BuyCP);
                                        Cocos2dxActivity.mHelper.consumeAsync(purchase, Cocos2dxActivity.this.mConsumeFinishedListener);
                                        return;
                                    }
                                    return;
                                }
                                Cocos2dxActivity.BuyCP = 6200;
                                Cocos2dxActivity.this.nativeSetCP(Cocos2dxActivity.BuyCP);
                                Cocos2dxActivity.mHelper.consumeAsync(purchase, Cocos2dxActivity.this.mConsumeFinishedListener);
                                return;
                            }
                            Cocos2dxActivity.BuyCP = 4000;
                            Cocos2dxActivity.this.nativeSetCP(Cocos2dxActivity.BuyCP);
                            Cocos2dxActivity.mHelper.consumeAsync(purchase, Cocos2dxActivity.this.mConsumeFinishedListener);
                            return;
                        }
                        Cocos2dxActivity.BuyCP = 1300;
                        Cocos2dxActivity.this.nativeSetCP(Cocos2dxActivity.BuyCP);
                        Cocos2dxActivity.mHelper.consumeAsync(purchase, Cocos2dxActivity.this.mConsumeFinishedListener);
                        return;
                    }
                    Cocos2dxActivity.BuyCP = 600;
                    Cocos2dxActivity.this.nativeSetCP(Cocos2dxActivity.BuyCP);
                    Cocos2dxActivity.mHelper.consumeAsync(purchase, Cocos2dxActivity.this.mConsumeFinishedListener);
                    return;
                }
                Cocos2dxActivity.BuyCP = 100;
                Cocos2dxActivity.this.nativeSetCP(Cocos2dxActivity.BuyCP);
                Cocos2dxActivity.mHelper.consumeAsync(purchase, Cocos2dxActivity.this.mConsumeFinishedListener);
            }
        }
    };
    IabHelper.OnConsumeFinishedListener mConsumeFinishedListener = new IabHelper.OnConsumeFinishedListener() { // from class: org.cocos2dx.lib.Cocos2dxActivity.4
        @Override // com.example.android.trivialdrivesample.util.IabHelper.OnConsumeFinishedListener
        public void onConsumeFinished(Purchase purchase, IabResult result) {
            Log.d(Cocos2dxActivity.TAG, "Consumption finished. Purchase: " + purchase + ", result: " + result);
            if (result.isSuccess()) {
                Log.d(Cocos2dxActivity.TAG, "구매 성공!!!!!!!!!!!");
            }
            if (Cocos2dxActivity.returnCP != 0) {
                Cocos2dxActivity.this.alert("처리하지 못한 CP" + Cocos2dxActivity.returnCP + "지급하였습니다.");
            }
            Log.d(Cocos2dxActivity.TAG, "OnConsumeFinishedListener");
            Log.d(Cocos2dxActivity.TAG, "End consumption flow.");
        }
    };
    Handler inappHandler = new Handler() { // from class: org.cocos2dx.lib.Cocos2dxActivity.5
        @Override // android.os.Handler
        public void handleMessage(Message msg) {
            Log.d(Cocos2dxActivity.TAG, Cocos2dxActivity.PID);
            new Handler().postDelayed(new Runnable() { // from class: org.cocos2dx.lib.Cocos2dxActivity.5.1
                @Override // java.lang.Runnable
                public void run() {
                    Cocos2dxActivity.this.BuyItemMenth_real();
                }
            }, 500L);
        }
    };

    private native void nativeCPShopFail();

    private native String nativeCppFunc();

    /* JADX INFO: Access modifiers changed from: private */
    public native void nativeSetCP(int i);

    private static native void nativeSetPaths(String str);

    @Override // android.app.Activity
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        mValidation = 0;
        instance = this;
        AndoridID = nativeCppFunc();
        this.mLicenseCheckerCallback = new MyLicenseCheckerCallback(this, null);
        String deviceId = Settings.Secure.getString(getContentResolver(), "android_id");
        this.mChecker = new LicenseChecker(this, new ServerManagedPolicy(this, new AESObfuscator(SALT, getPackageName(), deviceId)), AndoridID);
        this.mLicenseCheckerCallback.applicationError(3);
        PowerManager pm = (PowerManager) getSystemService("power");
        mWakeLock = pm.newWakeLock(26, "App");
        mWakeLock.acquire();
        if (AndoridID.contains("org.cocos2dx.ForgottenOdyssey")) {
            throw new RuntimeException("Please put your app's public key in MainActivity.java. See README.");
        }
        DisplayMetrics dm = new DisplayMetrics();
        getWindowManager().getDefaultDisplay().getMetrics(dm);
        accelerometer = new Cocos2dxAccelerometer(this);
        backgroundMusicPlayer = new Cocos2dxMusic(this);
        soundPlayer = new Cocos2dxSound(this);
        Cocos2dxBitmap.setContext(this);
        handler = new Handler() { // from class: org.cocos2dx.lib.Cocos2dxActivity.6
            @Override // android.os.Handler
            public void handleMessage(Message msg) {
                switch (msg.what) {
                    case 1:
                        Cocos2dxActivity.this.showDialog(((DialogMessage) msg.obj).title, ((DialogMessage) msg.obj).message);
                        break;
                }
            }
        };
        Log.d(TAG, "Creating IAB helper.");
        mHelper = new IabHelper(this, AndoridID);
        mHelper.enableDebugLogging(true);
        Log.d(TAG, "Starting setup.");
        IabHelper iabHelper = mHelper;
        new IabHelper.OnIabSetupFinishedListener() { // from class: org.cocos2dx.lib.Cocos2dxActivity.7
            @Override // com.example.android.trivialdrivesample.util.IabHelper.OnIabSetupFinishedListener
            public void onIabSetupFinished(IabResult result) {
                Log.d(Cocos2dxActivity.TAG, "Setup finished.");
                if (!result.isSuccess()) {
                    Cocos2dxActivity.this.complain("Problem setting up in-app billing: " + result);
                } else {
                    Log.d(Cocos2dxActivity.TAG, "Setup successful. Querying inventory.");
                    Cocos2dxActivity.mHelper.queryInventoryAsync(Cocos2dxActivity.this.mGotInventoryListener);
                }
            }
        };
    }

    @Override // android.app.Activity
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        Log.d(TAG, "onActivityResult(" + requestCode + "," + resultCode + "," + data);
        if (!mHelper.handleActivityResult(requestCode, resultCode, data)) {
            super.onActivityResult(requestCode, resultCode, data);
            return;
        }
        Log.d(TAG, "onActivityResult handled by IABUtil.");
        if (resultCode == 0) {
            alert("취소 되었습니다.");
            nativeCPShopFail();
        }
    }

    boolean verifyDeveloperPayload(Purchase p) {
        return true;
    }

    void complain(String message) {
        Log.e(TAG, "**** TrivialDrive Error: " + message);
        alert("Error: " + message);
    }

    void alert(String message) {
        AlertDialog.Builder bld = new AlertDialog.Builder(this);
        bld.setMessage(message);
        bld.setNeutralButton("OK", (DialogInterface.OnClickListener) null);
        Log.d(TAG, "Showing alert dialog: " + message);
        bld.create().show();
    }

    public static String getCurrentLanguage() {
        String languageName = Locale.getDefault().getLanguage();
        return languageName;
    }

    public static void showMessageBox(String title, String message) {
        Message msg = new Message();
        msg.what = 1;
        msg.obj = new DialogMessage(title, message);
        handler.sendMessage(msg);
    }

    public static void enableAccelerometer() {
        accelerometerEnabled = true;
        accelerometer.enable();
    }

    public static void disableAccelerometer() {
        accelerometerEnabled = false;
        accelerometer.disable();
    }

    public static void preloadBackgroundMusic(String path) {
        backgroundMusicPlayer.preloadBackgroundMusic(path);
    }

    public static void playBackgroundMusic(String path, boolean isLoop) {
        backgroundMusicPlayer.playBackgroundMusic(path, isLoop);
    }

    public static void stopBackgroundMusic() {
        backgroundMusicPlayer.stopBackgroundMusic();
    }

    public static void pauseBackgroundMusic() {
        backgroundMusicPlayer.pauseBackgroundMusic();
    }

    public static void resumeBackgroundMusic() {
        backgroundMusicPlayer.resumeBackgroundMusic();
    }

    public static void rewindBackgroundMusic() {
        backgroundMusicPlayer.rewindBackgroundMusic();
    }

    public static boolean isBackgroundMusicPlaying() {
        return backgroundMusicPlayer.isBackgroundMusicPlaying();
    }

    public static float getBackgroundMusicVolume() {
        return backgroundMusicPlayer.getBackgroundVolume();
    }

    public static void setBackgroundMusicVolume(float volume) {
        backgroundMusicPlayer.setBackgroundVolume(volume);
    }

    public static int playEffect(String path, boolean isLoop) {
        return soundPlayer.playEffect(path, isLoop);
    }

    public static void stopEffect(int soundId) {
        soundPlayer.stopEffect(soundId);
    }

    public static void pauseEffect(int soundId) {
        soundPlayer.pauseEffect(soundId);
    }

    public static void resumeEffect(int soundId) {
        soundPlayer.resumeEffect(soundId);
    }

    public static float getEffectsVolume() {
        return soundPlayer.getEffectsVolume();
    }

    public static void setEffectsVolume(float volume) {
        soundPlayer.setEffectsVolume(volume);
    }

    public static void preloadEffect(String path) {
        soundPlayer.preloadEffect(path);
    }

    public static void unloadEffect(String path) {
        soundPlayer.unloadEffect(path);
    }

    public static void stopAllEffects() {
        soundPlayer.stopAllEffects();
    }

    public static void pauseAllEffects() {
        soundPlayer.pauseAllEffects();
    }

    public static void resumeAllEffects() {
        soundPlayer.resumeAllEffects();
    }

    public static void end() {
        backgroundMusicPlayer.end();
        soundPlayer.end();
    }

    public static String getCocos2dxPackageName() {
        return packageName;
    }

    public static void terminateProcess() {
        Process.killProcess(Process.myPid());
    }

    public static void vibrate(long time) {
        soundPlayer.vibrate(time);
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        Log.d(TAG, "Destroying helper.");
        if (mHelper != null) {
            mHelper.dispose();
        }
        mHelper = null;
        this.mChecker.onDestroy();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        if (accelerometerEnabled) {
            accelerometer.enable();
        }
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
        if (accelerometerEnabled) {
            accelerometer.disable();
        }
    }

    protected void setPackageName(String packageName2) {
        packageName = packageName2;
        PackageManager packMgmr = getApplication().getPackageManager();
        try {
            ApplicationInfo appInfo = packMgmr.getApplicationInfo(packageName2, 0);
            String apkFilePath = appInfo.sourceDir;
            Log.w("apk path", apkFilePath);
            nativeSetPaths(apkFilePath);
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            throw new RuntimeException("Unable to locate assets, aborting...");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showDialog(String title, String message) {
        Dialog dialog = new AlertDialog.Builder(this).setTitle(title).setMessage(message).setPositiveButton("Ok", new DialogInterface.OnClickListener() { // from class: org.cocos2dx.lib.Cocos2dxActivity.8
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialog2, int whichButton) {
            }
        }).create();
        dialog.show();
    }

    private void showDialogError(String title, String message) {
        Dialog dialog = new AlertDialog.Builder(this).setTitle(title).setMessage(message).setPositiveButton("Ok", new DialogInterface.OnClickListener() { // from class: org.cocos2dx.lib.Cocos2dxActivity.9
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialog2, int whichButton) {
                Cocos2dxActivity.this.finish();
                Process.killProcess(Process.myPid());
            }
        }).create();
        dialog.show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void BuyItemMenth_real() {
        mHelper.launchPurchaseFlow(instance, PID, RC_REQUEST, this.mPurchaseFinishedListener, "");
    }

    public static void SetPID(String pid) {
        PID = pid;
        instance.inappHandler.sendMessage(instance.inappHandler.obtainMessage());
    }

    public static void MoveURL(String url) {
        instance.startActivity(new Intent("android.intent.action.VIEW", Uri.parse(url)));
    }

    public static void SetAndroidID(String pid) {
    }

    public static int GameContinue() {
        return mValidation;
    }

    public static int getNetResult() {
        return NetSucces;
    }

    public static void setNetResult(int succes) {
        NetSucces = succes;
    }

    public static int getRating() {
        return b_Rating;
    }

    public static void setRating(int Num) {
        b_Rating = Num;
    }

    public static int getreturnCP() {
        return returnCP;
    }

    public static void SetCP(int Num) {
        returnCP = Num;
    }

    public static int GetInternet() {
        ConnectivityManager m_NetConnectMgr = (ConnectivityManager) instance.getSystemService("connectivity");
        if (m_NetConnectMgr == null) {
            return 0;
        }
        try {
            NetworkInfo info = m_NetConnectMgr.getNetworkInfo(1);
            boolean bConnect = info.isAvailable() && info.isConnected();
            if (bConnect) {
                return 1;
            }
            ConnectivityManager m_NetConnectMgr2 = (ConnectivityManager) instance.getSystemService("connectivity");
            if (m_NetConnectMgr2 == null) {
                return 0;
            }
            try {
                NetworkInfo info2 = m_NetConnectMgr2.getNetworkInfo(0);
                boolean bConnect2 = info2.isAvailable() && info2.isConnected();
                return bConnect2 ? 1 : 0;
            } catch (Exception e) {
                return 0;
            }
        } catch (Exception e2) {
            return 0;
        }
    }

    public static void MoveStore(int Num) {
        Message msg = new Message();
        msg.what = Num;
        instance.moveStore.sendMessage(msg);
    }

    private class MyLicenseCheckerCallback implements LicenseCheckerCallback {
        private MyLicenseCheckerCallback() {
        }

        /* synthetic */ MyLicenseCheckerCallback(Cocos2dxActivity cocos2dxActivity, MyLicenseCheckerCallback myLicenseCheckerCallback) {
            this();
        }

        @Override // com.google.android.vending.licensing.LicenseCheckerCallback
        public void allow(int reason) {
            Cocos2dxActivity.mValidation = 1;
            Log.v("인증", "인증 성공");
            if (Cocos2dxActivity.this.isFinishing()) {
            }
        }

        @Override // com.google.android.vending.licensing.LicenseCheckerCallback
        public void dontAllow(int reason) {
            Log.v("인증", "인증 실패");
            Cocos2dxActivity.mValidation = 1;
        }

        @Override // com.google.android.vending.licensing.LicenseCheckerCallback
        public void applicationError(int errorCode) {
            Log.v("인증", "인증 오류");
            Cocos2dxActivity.mValidation = 1;
        }
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyUp(int keyCode, KeyEvent event) {
        switch (keyCode) {
            case 4:
                new AlertDialog.Builder(this).setTitle("게임 종료").setMessage("게임을 종료하시겠습니까?").setPositiveButton("예", new DialogInterface.OnClickListener() { // from class: org.cocos2dx.lib.Cocos2dxActivity.10
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialog, int which) {
                        Cocos2dxActivity.this.moveTaskToBack(true);
                        Cocos2dxActivity.this.finish();
                        Process.killProcess(Process.myPid());
                    }
                }).setNegativeButton("아니요", new DialogInterface.OnClickListener() { // from class: org.cocos2dx.lib.Cocos2dxActivity.11
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialog, int which) {
                    }
                }).show();
                break;
        }
        return true;
    }
}

.class public Lorg/cocos2dx/lib/Cocos2dxSound;
.super Ljava/lang/Object;
.source "Cocos2dxSound.java"


# static fields
.field private static final MAX_SIMULTANEOUS_STREAMS_DEFAULT:I = 0x5

.field private static final SOUND_PRIORITY:I = 0x1

.field private static final SOUND_QUALITY:I = 0x5

.field private static final SOUND_RATE:F = 1.0f

.field private static final TAG:Ljava/lang/String; = "Cocos2dxSound"


# instance fields
.field private final INVALID_SOUND_ID:I

.field private final INVALID_STREAM_ID:I

.field private mContext:Landroid/content/Context;

.field private mLeftVolume:F

.field private mPathSoundIDMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap",
            "<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private mRightVolume:F

.field private mSoundIdStreamIdMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap",
            "<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private mSoundPool:Landroid/media/SoundPool;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .prologue
    const/4 v0, -0x1

    .line 63
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 60
    iput v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->INVALID_SOUND_ID:I

    .line 61
    iput v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->INVALID_STREAM_ID:I

    .line 64
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mContext:Landroid/content/Context;

    .line 65
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->initData()V

    .line 66
    return-void
.end method

.method private initData()V
    .locals 4

    .prologue
    const/4 v3, 0x5

    const/high16 v2, 0x3f000000    # 0.5f

    .line 251
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundIdStreamIdMap:Ljava/util/HashMap;

    .line 252
    new-instance v0, Landroid/media/SoundPool;

    .line 253
    const/4 v1, 0x3

    invoke-direct {v0, v3, v1, v3}, Landroid/media/SoundPool;-><init>(III)V

    .line 252
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    .line 254
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    .line 256
    iput v2, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLeftVolume:F

    .line 257
    iput v2, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mRightVolume:F

    .line 258
    return-void
.end method

.method private pauseOrResumeAllEffects(Z)V
    .locals 4
    .param p1, "isPause"    # Z

    .prologue
    .line 262
    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundIdStreamIdMap:Ljava/util/HashMap;

    invoke-virtual {v3}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 263
    .local v1, "iter":Ljava/util/Iterator;, "Ljava/util/Iterator<*>;"
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-nez v3, :cond_0

    .line 273
    return-void

    .line 265
    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 266
    .local v0, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Integer;Ljava/lang/Integer;>;"
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 267
    .local v2, "soundId":I
    if-eqz p1, :cond_1

    .line 268
    invoke-virtual {p0, v2}, Lorg/cocos2dx/lib/Cocos2dxSound;->pauseEffect(I)V

    goto :goto_0

    .line 270
    :cond_1
    invoke-virtual {p0, v2}, Lorg/cocos2dx/lib/Cocos2dxSound;->resumeEffect(I)V

    goto :goto_0
.end method


# virtual methods
.method public createSoundIdFromAsset(Ljava/lang/String;)I
    .locals 5
    .param p1, "path"    # Ljava/lang/String;

    .prologue
    .line 233
    const/4 v1, -0x1

    .line 236
    .local v1, "soundId":I
    :try_start_0
    iget-object v2, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mContext:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v3

    invoke-virtual {v3, p1}, Landroid/content/res/AssetManager;->openFd(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;

    move-result-object v3

    const/4 v4, 0x0

    invoke-virtual {v2, v3, v4}, Landroid/media/SoundPool;->load(Landroid/content/res/AssetFileDescriptor;I)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-result v1

    .line 241
    :goto_0
    return v1

    .line 237
    :catch_0
    move-exception v0

    .line 238
    .local v0, "e":Ljava/lang/Exception;
    const-string v2, "Cocos2dxSound"

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "error: "

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    goto :goto_0
.end method

.method public end()V
    .locals 1

    .prologue
    .line 225
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v0}, Landroid/media/SoundPool;->release()V

    .line 226
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    .line 227
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundIdStreamIdMap:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    .line 229
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->initData()V

    .line 230
    return-void
.end method

.method public getEffectsVolume()F
    .locals 2

    .prologue
    .line 199
    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLeftVolume:F

    iget v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mRightVolume:F

    add-float/2addr v0, v1

    const/high16 v1, 0x40000000    # 2.0f

    div-float/2addr v0, v1

    return v0
.end method

.method public pauseAllEffects()V
    .locals 1

    .prologue
    .line 179
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->pauseOrResumeAllEffects(Z)V

    .line 180
    return-void
.end method

.method public pauseEffect(I)V
    .locals 3
    .param p1, "soundId"    # I

    .prologue
    .line 160
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundIdStreamIdMap:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    .line 162
    .local v0, "streamId":Ljava/lang/Integer;
    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_0

    .line 163
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/media/SoundPool;->pause(I)V

    .line 164
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 166
    :cond_0
    return-void
.end method

.method public playEffect(Ljava/lang/String;Z)I
    .locals 9
    .param p1, "path"    # Ljava/lang/String;
    .param p2, "isLoop"    # Z

    .prologue
    const/4 v5, -0x1

    .line 103
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/Integer;

    .line 105
    .local v7, "soundId":Ljava/lang/Integer;
    if-eqz v7, :cond_2

    .line 108
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/media/SoundPool;->stop(I)V

    .line 111
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v1

    .line 112
    iget v2, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLeftVolume:F

    iget v3, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mRightVolume:F

    const/4 v4, 0x1

    .line 113
    if-eqz p2, :cond_1

    :goto_0
    const/high16 v6, 0x3f800000    # 1.0f

    .line 111
    invoke-virtual/range {v0 .. v6}, Landroid/media/SoundPool;->play(IFFIIF)I

    move-result v8

    .line 116
    .local v8, "streamId":I
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundIdStreamIdMap:Ljava/util/HashMap;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v7, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 147
    .end local v8    # "streamId":I
    :goto_1
    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v5

    :cond_0
    return v5

    .line 113
    :cond_1
    const/4 v5, 0x0

    goto :goto_0

    .line 119
    :cond_2
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxSound;->preloadEffect(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    .line 120
    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v0

    if-eq v0, v5, :cond_0

    .line 135
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    .line 136
    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxSound$1;

    invoke-direct {v1, p0, p1, p2}, Lorg/cocos2dx/lib/Cocos2dxSound$1;-><init>(Lorg/cocos2dx/lib/Cocos2dxSound;Ljava/lang/String;Z)V

    invoke-virtual {v0, v1}, Landroid/media/SoundPool;->setOnLoadCompleteListener(Landroid/media/SoundPool$OnLoadCompleteListener;)V

    goto :goto_1
.end method

.method public preloadEffect(Ljava/lang/String;)I
    .locals 4
    .param p1, "path"    # Ljava/lang/String;

    .prologue
    const/4 v3, -0x1

    .line 69
    const/4 v0, -0x1

    .line 72
    .local v0, "soundId":I
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 73
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 86
    :cond_0
    :goto_0
    return v0

    .line 75
    :cond_1
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxSound;->createSoundIdFromAsset(Ljava/lang/String;)I

    move-result v0

    .line 77
    if-eq v0, v3, :cond_0

    .line 79
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundIdStreamIdMap:Ljava/util/HashMap;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 82
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, p1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0
.end method

.method public resumeAllEffects()V
    .locals 1

    .prologue
    .line 184
    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->pauseOrResumeAllEffects(Z)V

    .line 185
    return-void
.end method

.method public resumeEffect(I)V
    .locals 3
    .param p1, "soundId"    # I

    .prologue
    .line 169
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundIdStreamIdMap:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    .line 171
    .local v0, "streamId":Ljava/lang/Integer;
    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_0

    .line 172
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/media/SoundPool;->resume(I)V

    .line 173
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 175
    :cond_0
    return-void
.end method

.method public setEffectsVolume(F)V
    .locals 6
    .param p1, "volume"    # F

    .prologue
    .line 205
    const/4 v2, 0x0

    cmpg-float v2, p1, v2

    if-gez v2, :cond_0

    .line 206
    const/4 p1, 0x0

    .line 208
    :cond_0
    const/high16 v2, 0x3f800000    # 1.0f

    cmpl-float v2, p1, v2

    if-lez v2, :cond_1

    .line 209
    const/high16 p1, 0x3f800000    # 1.0f

    .line 212
    :cond_1
    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mRightVolume:F

    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLeftVolume:F

    .line 215
    iget-object v2, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundIdStreamIdMap:Ljava/util/HashMap;

    invoke-virtual {v2}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 216
    .local v1, "iter":Ljava/util/Iterator;, "Ljava/util/Iterator<*>;"
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-nez v2, :cond_2

    .line 222
    return-void

    .line 218
    :cond_2
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 219
    .local v0, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Integer;Ljava/lang/Integer;>;"
    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iget v4, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLeftVolume:F

    .line 220
    iget v5, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mRightVolume:F

    .line 219
    invoke-virtual {v3, v2, v4, v5}, Landroid/media/SoundPool;->setVolume(IFF)V

    goto :goto_0
.end method

.method public stopAllEffects()V
    .locals 4

    .prologue
    .line 189
    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundIdStreamIdMap:Ljava/util/HashMap;

    invoke-virtual {v3}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 190
    .local v1, "iter":Ljava/util/Iterator;, "Ljava/util/Iterator<*>;"
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-nez v3, :cond_0

    .line 196
    return-void

    .line 192
    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 193
    .local v0, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Integer;Ljava/lang/Integer;>;"
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 194
    .local v2, "soundId":I
    invoke-virtual {p0, v2}, Lorg/cocos2dx/lib/Cocos2dxSound;->stopEffect(I)V

    goto :goto_0
.end method

.method public stopEffect(I)V
    .locals 3
    .param p1, "soundId"    # I

    .prologue
    .line 151
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundIdStreamIdMap:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    .line 153
    .local v0, "streamId":Ljava/lang/Integer;
    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_0

    .line 154
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/media/SoundPool;->stop(I)V

    .line 155
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 157
    :cond_0
    return-void
.end method

.method public unloadEffect(Ljava/lang/String;)V
    .locals 3
    .param p1, "path"    # Ljava/lang/String;

    .prologue
    .line 91
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    .line 93
    .local v0, "soundId":Ljava/lang/Integer;
    if-eqz v0, :cond_0

    .line 95
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/media/SoundPool;->unload(I)Z

    .line 98
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundIdStreamIdMap:Ljava/util/HashMap;

    invoke-virtual {v1, v0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 100
    :cond_0
    return-void
.end method

.method public vibrate(J)V
    .locals 3
    .param p1, "time"    # J

    .prologue
    .line 245
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mContext:Landroid/content/Context;

    .line 246
    const-string v2, "vibrator"

    invoke-virtual {v1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 245
    check-cast v0, Landroid/os/Vibrator;

    .line 247
    .local v0, "v":Landroid/os/Vibrator;
    invoke-virtual {v0, p1, p2}, Landroid/os/Vibrator;->vibrate(J)V

    .line 248
    return-void
.end method

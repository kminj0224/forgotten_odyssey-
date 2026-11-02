.class public Lorg/cocos2dx/lib/Cocos2dxActivity;
.super Landroid/app/Activity;
.source "Cocos2dxActivity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/cocos2dx/lib/Cocos2dxActivity$MyLicenseCheckerCallback;
    }
.end annotation


# static fields
.field public static AndoridID:Ljava/lang/String; = null

.field public static BuyCP:I = 0x0

.field static final CP100:Ljava/lang/String; = "bcp100"

.field static final CP1300:Ljava/lang/String; = "bcp1300"

.field static final CP15000:Ljava/lang/String; = "bcp15000"

.field static final CP4000:Ljava/lang/String; = "bcp4000"

.field static final CP600:Ljava/lang/String; = "bcp600"

.field static final CP6200:Ljava/lang/String; = "bcp6200"

.field private static final HANDLER_SHOW_DIALOG:I = 0x1

.field public static NetError:I = 0x0

.field public static NetSucces:I = 0x0

.field private static PID:Ljava/lang/String; = null

.field static final RC_REQUEST:I = 0x2711

.field private static final SALT:[B

.field static final SKU_GAS:Ljava/lang/String; = "cp100"

.field static final SKU_INFINITE_GAS:Ljava/lang/String; = "infinite_gas"

.field static final SKU_PREMIUM:Ljava/lang/String; = "premium"

.field static final TAG:Ljava/lang/String; = "TrivialDrive"

.field static final TANK_MAX:I = 0x4

.field static final VALIDATION_FAULT_SET:I = 0x2

.field static final VALIDATION_NOT_SET:I = 0x0

.field static final VALIDATION_SUCCESS_SET:I = 0x1

.field private static accelerometer:Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

.field private static accelerometerEnabled:Z

.field public static b_Rating:I

.field private static backgroundMusicPlayer:Lorg/cocos2dx/lib/Cocos2dxMusic;

.field private static deviceData:Lorg/cocos2dx/lib/Cocos2dxDeviceData;

.field private static handler:Landroid/os/Handler;

.field public static instance:Lorg/cocos2dx/lib/Cocos2dxActivity;

.field private static mHelper:Lcom/example/android/trivialdrivesample/util/IabHelper;

.field static mValidation:I

.field static mWakeLock:Landroid/os/PowerManager$WakeLock;

.field private static packageName:Ljava/lang/String;

.field public static returnCP:I

.field private static soundPlayer:Lorg/cocos2dx/lib/Cocos2dxSound;


# instance fields
.field inappHandler:Landroid/os/Handler;

.field private mChecker:Lcom/google/android/vending/licensing/LicenseChecker;

.field mConsumeFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;

.field mGotInventoryListener:Lcom/example/android/trivialdrivesample/util/IabHelper$QueryInventoryFinishedListener;

.field mIsPremium:Z

.field private mLicenseCheckerCallback:Lcom/google/android/vending/licensing/LicenseCheckerCallback;

.field mPurchaseFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnIabPurchaseFinishedListener;

.field mSubscribedToInfiniteGas:Z

.field mTank:I

.field public moveStore:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .prologue
    const/4 v1, 0x0

    .line 99
    sput-boolean v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->accelerometerEnabled:Z

    .line 106
    sput v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->NetSucces:I

    .line 107
    sput v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->b_Rating:I

    .line 108
    sput v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->NetError:I

    .line 109
    sput v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->returnCP:I

    .line 110
    sput v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->BuyCP:I

    .line 127
    const-string v0, ""

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->PID:Ljava/lang/String;

    .line 157
    const/16 v0, 0x14

    new-array v0, v0, [B

    fill-array-data v0, :array_0

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->SALT:[B

    .line 162
    sput v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->mValidation:I

    return-void

    .line 157
    nop

    :array_0
    .array-data 1
        -0x2et
        0x41t
        0x1et
        -0x80t
        -0x67t
        -0x39t
        0x4at
        -0x40t
        0x33t
        0x58t
        -0x5ft
        -0x2dt
        0x4dt
        -0x75t
        -0x24t
        -0x71t
        -0xbt
        0x20t
        -0x40t
        0x59t
    .end array-data
.end method

.method public constructor <init>()V
    .locals 1

    .prologue
    const/4 v0, 0x0

    .line 91
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 129
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mIsPremium:Z

    .line 132
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mSubscribedToInfiniteGas:Z

    .line 164
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxActivity$1;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity$1;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->moveStore:Landroid/os/Handler;

    .line 313
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxActivity$2;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity$2;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGotInventoryListener:Lcom/example/android/trivialdrivesample/util/IabHelper$QueryInventoryFinishedListener;

    .line 413
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxActivity$3;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity$3;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mPurchaseFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnIabPurchaseFinishedListener;

    .line 501
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxActivity$4;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity$4;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mConsumeFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;

    .line 747
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxActivity$5;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity$5;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->inappHandler:Landroid/os/Handler;

    .line 91
    return-void
.end method

.method private BuyItemMenth_real()V
    .locals 6

    .prologue
    .line 772
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mHelper:Lcom/example/android/trivialdrivesample/util/IabHelper;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->instance:Lorg/cocos2dx/lib/Cocos2dxActivity;

    sget-object v2, Lorg/cocos2dx/lib/Cocos2dxActivity;->PID:Ljava/lang/String;

    const/16 v3, 0x2711

    .line 773
    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mPurchaseFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnIabPurchaseFinishedListener;

    const-string v5, ""

    .line 772
    invoke-virtual/range {v0 .. v5}, Lcom/example/android/trivialdrivesample/util/IabHelper;->launchPurchaseFlow(Landroid/app/Activity;Ljava/lang/String;ILcom/example/android/trivialdrivesample/util/IabHelper$OnIabPurchaseFinishedListener;Ljava/lang/String;)V

    .line 774
    return-void
.end method

.method public static GameContinue()I
    .locals 1

    .prologue
    .line 795
    sget v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mValidation:I

    return v0
.end method

.method public static GetInternet()I
    .locals 8

    .prologue
    const/4 v4, 0x1

    const/4 v5, 0x0

    .line 824
    sget-object v6, Lorg/cocos2dx/lib/Cocos2dxActivity;->instance:Lorg/cocos2dx/lib/Cocos2dxActivity;

    const-string v7, "connectivity"

    invoke-virtual {v6, v7}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/net/ConnectivityManager;

    .line 825
    .local v3, "m_NetConnectMgr":Landroid/net/ConnectivityManager;
    const/4 v0, 0x0

    .line 828
    .local v0, "bConnect":Z
    if-nez v3, :cond_1

    .line 862
    :cond_0
    :goto_0
    return v5

    .line 830
    :cond_1
    const/4 v6, 0x1

    :try_start_0
    invoke-virtual {v3, v6}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v2

    .line 831
    .local v2, "info":Landroid/net/NetworkInfo;
    invoke-virtual {v2}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v6

    if-eqz v6, :cond_2

    invoke-virtual {v2}, Landroid/net/NetworkInfo;->isConnected()Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-result v6

    if-eqz v6, :cond_2

    move v0, v4

    .line 839
    :goto_1
    if-eqz v0, :cond_3

    move v5, v4

    .line 841
    goto :goto_0

    :cond_2
    move v0, v5

    .line 831
    goto :goto_1

    .line 834
    .end local v2    # "info":Landroid/net/NetworkInfo;
    :catch_0
    move-exception v1

    .line 836
    .local v1, "e":Ljava/lang/Exception;
    goto :goto_0

    .line 845
    .end local v1    # "e":Ljava/lang/Exception;
    .restart local v2    # "info":Landroid/net/NetworkInfo;
    :cond_3
    sget-object v6, Lorg/cocos2dx/lib/Cocos2dxActivity;->instance:Lorg/cocos2dx/lib/Cocos2dxActivity;

    const-string v7, "connectivity"

    invoke-virtual {v6, v7}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    .end local v3    # "m_NetConnectMgr":Landroid/net/ConnectivityManager;
    check-cast v3, Landroid/net/ConnectivityManager;

    .line 848
    .restart local v3    # "m_NetConnectMgr":Landroid/net/ConnectivityManager;
    if-eqz v3, :cond_0

    .line 849
    const/4 v6, 0x0

    :try_start_1
    invoke-virtual {v3, v6}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v2

    .line 850
    invoke-virtual {v2}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v6

    if-eqz v6, :cond_4

    invoke-virtual {v2}, Landroid/net/NetworkInfo;->isConnected()Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    move-result v6

    if-eqz v6, :cond_4

    move v0, v4

    .line 857
    :goto_2
    if-eqz v0, :cond_0

    move v5, v4

    .line 859
    goto :goto_0

    :cond_4
    move v0, v5

    .line 850
    goto :goto_2

    .line 852
    :catch_1
    move-exception v1

    .line 854
    .restart local v1    # "e":Ljava/lang/Exception;
    goto :goto_0
.end method

.method public static MoveStore(I)V
    .locals 2
    .param p0, "Num"    # I

    .prologue
    .line 871
    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    .line 872
    .local v0, "msg":Landroid/os/Message;
    iput p0, v0, Landroid/os/Message;->what:I

    .line 873
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->instance:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v1, v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->moveStore:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 874
    return-void
.end method

.method public static MoveURL(Ljava/lang/String;)V
    .locals 4
    .param p0, "url"    # Ljava/lang/String;

    .prologue
    .line 784
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->instance:Lorg/cocos2dx/lib/Cocos2dxActivity;

    new-instance v1, Landroid/content/Intent;

    const-string v2, "android.intent.action.VIEW"

    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->startActivity(Landroid/content/Intent;)V

    .line 785
    return-void
.end method

.method public static SetAndroidID(Ljava/lang/String;)V
    .locals 0
    .param p0, "pid"    # Ljava/lang/String;

    .prologue
    .line 790
    return-void
.end method

.method public static SetCP(I)V
    .locals 0
    .param p0, "Num"    # I

    .prologue
    .line 820
    sput p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->returnCP:I

    .line 821
    return-void
.end method

.method public static SetPID(Ljava/lang/String;)V
    .locals 2
    .param p0, "pid"    # Ljava/lang/String;

    .prologue
    .line 779
    sput-object p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->PID:Ljava/lang/String;

    .line 780
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->instance:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v0, v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->inappHandler:Landroid/os/Handler;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->instance:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v1, v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->inappHandler:Landroid/os/Handler;

    invoke-virtual {v1}, Landroid/os/Handler;->obtainMessage()Landroid/os/Message;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 781
    return-void
.end method

.method static synthetic access$0(Ljava/lang/String;)V
    .locals 0

    .prologue
    .line 127
    sput-object p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->PID:Ljava/lang/String;

    return-void
.end method

.method static synthetic access$1()Ljava/lang/String;
    .locals 1

    .prologue
    .line 127
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->PID:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$2()Lcom/example/android/trivialdrivesample/util/IabHelper;
    .locals 1

    .prologue
    .line 155
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mHelper:Lcom/example/android/trivialdrivesample/util/IabHelper;

    return-object v0
.end method

.method static synthetic access$3(Lorg/cocos2dx/lib/Cocos2dxActivity;I)V
    .locals 0

    .prologue
    .line 93
    invoke-direct {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->nativeSetCP(I)V

    return-void
.end method

.method static synthetic access$4(Lorg/cocos2dx/lib/Cocos2dxActivity;)V
    .locals 0

    .prologue
    .line 770
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->BuyItemMenth_real()V

    return-void
.end method

.method static synthetic access$5(Lorg/cocos2dx/lib/Cocos2dxActivity;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .prologue
    .line 713
    invoke-direct {p0, p1, p2}, Lorg/cocos2dx/lib/Cocos2dxActivity;->showDialog(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static disableAccelerometer()V
    .locals 1

    .prologue
    .line 561
    const/4 v0, 0x0

    sput-boolean v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->accelerometerEnabled:Z

    .line 562
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->accelerometer:Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->disable()V

    .line 563
    return-void
.end method

.method public static enableAccelerometer()V
    .locals 1

    .prologue
    .line 556
    const/4 v0, 0x1

    sput-boolean v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->accelerometerEnabled:Z

    .line 557
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->accelerometer:Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->enable()V

    .line 558
    return-void
.end method

.method public static end()V
    .locals 1

    .prologue
    .line 646
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->backgroundMusicPlayer:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->end()V

    .line 647
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->soundPlayer:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->end()V

    .line 648
    return-void
.end method

.method public static getBackgroundMusicVolume()F
    .locals 1

    .prologue
    .line 594
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->backgroundMusicPlayer:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->getBackgroundVolume()F

    move-result v0

    return v0
.end method

.method public static getCocos2dxPackageName()Ljava/lang/String;
    .locals 1

    .prologue
    .line 651
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->packageName:Ljava/lang/String;

    return-object v0
.end method

.method public static getCurrentLanguage()Ljava/lang/String;
    .locals 2

    .prologue
    .line 543
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v0

    .line 544
    .local v0, "languageName":Ljava/lang/String;
    return-object v0
.end method

.method public static getEffectsVolume()F
    .locals 1

    .prologue
    .line 618
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->soundPlayer:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->getEffectsVolume()F

    move-result v0

    return v0
.end method

.method public static getNetResult()I
    .locals 1

    .prologue
    .line 800
    sget v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->NetSucces:I

    return v0
.end method

.method public static getRating()I
    .locals 1

    .prologue
    .line 808
    sget v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->b_Rating:I

    return v0
.end method

.method public static getreturnCP()I
    .locals 1

    .prologue
    .line 816
    sget v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->returnCP:I

    return v0
.end method

.method public static isBackgroundMusicPlaying()Z
    .locals 1

    .prologue
    .line 590
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->backgroundMusicPlayer:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->isBackgroundMusicPlaying()Z

    move-result v0

    return v0
.end method

.method private native nativeCPShopFail()V
.end method

.method private native nativeCppFunc()Ljava/lang/String;
.end method

.method private native nativeSetCP(I)V
.end method

.method private static native nativeSetPaths(Ljava/lang/String;)V
.end method

.method public static pauseAllEffects()V
    .locals 1

    .prologue
    .line 638
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->soundPlayer:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->pauseAllEffects()V

    .line 639
    return-void
.end method

.method public static pauseBackgroundMusic()V
    .locals 1

    .prologue
    .line 578
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->backgroundMusicPlayer:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->pauseBackgroundMusic()V

    .line 579
    return-void
.end method

.method public static pauseEffect(I)V
    .locals 1
    .param p0, "soundId"    # I

    .prologue
    .line 610
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->soundPlayer:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->pauseEffect(I)V

    .line 611
    return-void
.end method

.method public static playBackgroundMusic(Ljava/lang/String;Z)V
    .locals 1
    .param p0, "path"    # Ljava/lang/String;
    .param p1, "isLoop"    # Z

    .prologue
    .line 570
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->backgroundMusicPlayer:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0, p0, p1}, Lorg/cocos2dx/lib/Cocos2dxMusic;->playBackgroundMusic(Ljava/lang/String;Z)V

    .line 571
    return-void
.end method

.method public static playEffect(Ljava/lang/String;Z)I
    .locals 1
    .param p0, "path"    # Ljava/lang/String;
    .param p1, "isLoop"    # Z

    .prologue
    .line 602
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->soundPlayer:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-virtual {v0, p0, p1}, Lorg/cocos2dx/lib/Cocos2dxSound;->playEffect(Ljava/lang/String;Z)I

    move-result v0

    return v0
.end method

.method public static preloadBackgroundMusic(Ljava/lang/String;)V
    .locals 1
    .param p0, "path"    # Ljava/lang/String;

    .prologue
    .line 566
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->backgroundMusicPlayer:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->preloadBackgroundMusic(Ljava/lang/String;)V

    .line 567
    return-void
.end method

.method public static preloadEffect(Ljava/lang/String;)V
    .locals 1
    .param p0, "path"    # Ljava/lang/String;

    .prologue
    .line 626
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->soundPlayer:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->preloadEffect(Ljava/lang/String;)I

    .line 627
    return-void
.end method

.method public static resumeAllEffects()V
    .locals 1

    .prologue
    .line 642
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->soundPlayer:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->resumeAllEffects()V

    .line 643
    return-void
.end method

.method public static resumeBackgroundMusic()V
    .locals 1

    .prologue
    .line 582
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->backgroundMusicPlayer:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->resumeBackgroundMusic()V

    .line 583
    return-void
.end method

.method public static resumeEffect(I)V
    .locals 1
    .param p0, "soundId"    # I

    .prologue
    .line 614
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->soundPlayer:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->resumeEffect(I)V

    .line 615
    return-void
.end method

.method public static rewindBackgroundMusic()V
    .locals 1

    .prologue
    .line 586
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->backgroundMusicPlayer:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->rewindBackgroundMusic()V

    .line 587
    return-void
.end method

.method public static setBackgroundMusicVolume(F)V
    .locals 1
    .param p0, "volume"    # F

    .prologue
    .line 598
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->backgroundMusicPlayer:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->setBackgroundVolume(F)V

    .line 599
    return-void
.end method

.method public static setEffectsVolume(F)V
    .locals 1
    .param p0, "volume"    # F

    .prologue
    .line 622
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->soundPlayer:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->setEffectsVolume(F)V

    .line 623
    return-void
.end method

.method public static setNetResult(I)V
    .locals 0
    .param p0, "succes"    # I

    .prologue
    .line 804
    sput p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->NetSucces:I

    .line 805
    return-void
.end method

.method public static setRating(I)V
    .locals 0
    .param p0, "Num"    # I

    .prologue
    .line 812
    sput p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->b_Rating:I

    .line 813
    return-void
.end method

.method private showDialog(Ljava/lang/String;Ljava/lang/String;)V
    .locals 4
    .param p1, "title"    # Ljava/lang/String;
    .param p2, "message"    # Ljava/lang/String;

    .prologue
    .line 714
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 715
    invoke-virtual {v1, p1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 716
    invoke-virtual {v1, p2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 717
    const-string v2, "Ok"

    .line 718
    new-instance v3, Lorg/cocos2dx/lib/Cocos2dxActivity$8;

    invoke-direct {v3, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity$8;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V

    .line 717
    invoke-virtual {v1, v2, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 724
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 726
    .local v0, "dialog":Landroid/app/Dialog;
    invoke-virtual {v0}, Landroid/app/Dialog;->show()V

    .line 727
    return-void
.end method

.method private showDialogError(Ljava/lang/String;Ljava/lang/String;)V
    .locals 4
    .param p1, "title"    # Ljava/lang/String;
    .param p2, "message"    # Ljava/lang/String;

    .prologue
    .line 729
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 730
    invoke-virtual {v1, p1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 731
    invoke-virtual {v1, p2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 732
    const-string v2, "Ok"

    .line 733
    new-instance v3, Lorg/cocos2dx/lib/Cocos2dxActivity$9;

    invoke-direct {v3, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity$9;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V

    .line 732
    invoke-virtual {v1, v2, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 742
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 744
    .local v0, "dialog":Landroid/app/Dialog;
    invoke-virtual {v0}, Landroid/app/Dialog;->show()V

    .line 745
    return-void
.end method

.method public static showMessageBox(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .param p0, "title"    # Ljava/lang/String;
    .param p1, "message"    # Ljava/lang/String;

    .prologue
    .line 548
    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    .line 549
    .local v0, "msg":Landroid/os/Message;
    const/4 v1, 0x1

    iput v1, v0, Landroid/os/Message;->what:I

    .line 550
    new-instance v1, Lorg/cocos2dx/lib/DialogMessage;

    invoke-direct {v1, p0, p1}, Lorg/cocos2dx/lib/DialogMessage;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 552
    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->handler:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 553
    return-void
.end method

.method public static stopAllEffects()V
    .locals 1

    .prologue
    .line 634
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->soundPlayer:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->stopAllEffects()V

    .line 635
    return-void
.end method

.method public static stopBackgroundMusic()V
    .locals 1

    .prologue
    .line 574
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->backgroundMusicPlayer:Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxMusic;->stopBackgroundMusic()V

    .line 575
    return-void
.end method

.method public static stopEffect(I)V
    .locals 1
    .param p0, "soundId"    # I

    .prologue
    .line 606
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->soundPlayer:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->stopEffect(I)V

    .line 607
    return-void
.end method

.method public static terminateProcess()V
    .locals 1

    .prologue
    .line 655
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v0

    invoke-static {v0}, Landroid/os/Process;->killProcess(I)V

    .line 656
    return-void
.end method

.method public static unloadEffect(Ljava/lang/String;)V
    .locals 1
    .param p0, "path"    # Ljava/lang/String;

    .prologue
    .line 630
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->soundPlayer:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-virtual {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->unloadEffect(Ljava/lang/String;)V

    .line 631
    return-void
.end method

.method public static vibrate(J)V
    .locals 2
    .param p0, "time"    # J

    .prologue
    .line 660
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->soundPlayer:Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-virtual {v0, p0, p1}, Lorg/cocos2dx/lib/Cocos2dxSound;->vibrate(J)V

    .line 661
    return-void
.end method


# virtual methods
.method alert(Ljava/lang/String;)V
    .locals 4
    .param p1, "message"    # Ljava/lang/String;

    .prologue
    .line 535
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 536
    .local v0, "bld":Landroid/app/AlertDialog$Builder;
    invoke-virtual {v0, p1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 537
    const-string v1, "OK"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setNeutralButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 538
    const-string v1, "TrivialDrive"

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Showing alert dialog: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 539
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/AlertDialog;->show()V

    .line 540
    return-void
.end method

.method complain(Ljava/lang/String;)V
    .locals 3
    .param p1, "message"    # Ljava/lang/String;

    .prologue
    .line 530
    const-string v0, "TrivialDrive"

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "**** TrivialDrive Error: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 531
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Error: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->alert(Ljava/lang/String;)V

    .line 532
    return-void
.end method

.method protected onActivityResult(IILandroid/content/Intent;)V
    .locals 3
    .param p1, "requestCode"    # I
    .param p2, "resultCode"    # I
    .param p3, "data"    # Landroid/content/Intent;

    .prologue
    .line 291
    const-string v0, "TrivialDrive"

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "onActivityResult("

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v1

    const-string v2, ","

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v1

    const-string v2, ","

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 294
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mHelper:Lcom/example/android/trivialdrivesample/util/IabHelper;

    invoke-virtual {v0, p1, p2, p3}, Lcom/example/android/trivialdrivesample/util/IabHelper;->handleActivityResult(IILandroid/content/Intent;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 298
    invoke-super {p0, p1, p2, p3}, Landroid/app/Activity;->onActivityResult(IILandroid/content/Intent;)V

    .line 310
    :cond_0
    :goto_0
    return-void

    .line 301
    :cond_1
    const-string v0, "TrivialDrive"

    const-string v1, "onActivityResult handled by IABUtil."

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 302
    if-nez p2, :cond_0

    .line 304
    const-string v0, "\ucde8\uc18c \ub418\uc5c8\uc2b5\ub2c8\ub2e4."

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->alert(Ljava/lang/String;)V

    .line 307
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->nativeCPShopFail()V

    goto :goto_0
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 8
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .prologue
    .line 202
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 203
    const/4 v3, 0x0

    sput v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->mValidation:I

    .line 204
    sput-object p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->instance:Lorg/cocos2dx/lib/Cocos2dxActivity;

    .line 208
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->nativeCppFunc()Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->AndoridID:Ljava/lang/String;

    .line 216
    new-instance v3, Lorg/cocos2dx/lib/Cocos2dxActivity$MyLicenseCheckerCallback;

    const/4 v4, 0x0

    invoke-direct {v3, p0, v4}, Lorg/cocos2dx/lib/Cocos2dxActivity$MyLicenseCheckerCallback;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;Lorg/cocos2dx/lib/Cocos2dxActivity$MyLicenseCheckerCallback;)V

    iput-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mLicenseCheckerCallback:Lcom/google/android/vending/licensing/LicenseCheckerCallback;

    .line 218
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v3

    const-string v4, "android_id"

    invoke-static {v3, v4}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 220
    .local v0, "deviceId":Ljava/lang/String;
    new-instance v3, Lcom/google/android/vending/licensing/LicenseChecker;

    .line 221
    new-instance v4, Lcom/google/android/vending/licensing/ServerManagedPolicy;

    new-instance v5, Lcom/google/android/vending/licensing/AESObfuscator;

    sget-object v6, Lorg/cocos2dx/lib/Cocos2dxActivity;->SALT:[B

    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getPackageName()Ljava/lang/String;

    move-result-object v7

    invoke-direct {v5, v6, v7, v0}, Lcom/google/android/vending/licensing/AESObfuscator;-><init>([BLjava/lang/String;Ljava/lang/String;)V

    invoke-direct {v4, p0, v5}, Lcom/google/android/vending/licensing/ServerManagedPolicy;-><init>(Landroid/content/Context;Lcom/google/android/vending/licensing/Obfuscator;)V

    .line 222
    sget-object v5, Lorg/cocos2dx/lib/Cocos2dxActivity;->AndoridID:Ljava/lang/String;

    invoke-direct {v3, p0, v4, v5}, Lcom/google/android/vending/licensing/LicenseChecker;-><init>(Landroid/content/Context;Lcom/google/android/vending/licensing/Policy;Ljava/lang/String;)V

    .line 220
    iput-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mChecker:Lcom/google/android/vending/licensing/LicenseChecker;

    .line 225
    const/4 v3, 0x3

    nop

    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mLicenseCheckerCallback:Lcom/google/android/vending/licensing/LicenseCheckerCallback;

    invoke-interface {v4, v3}, Lcom/google/android/vending/licensing/LicenseCheckerCallback;->applicationError(I)V

    .line 227
    const-string v3, "power"

    invoke-virtual {p0, v3}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/os/PowerManager;

    .line 228
    .local v2, "pm":Landroid/os/PowerManager;
    const/16 v3, 0x1a

    const-string v4, "App"

    invoke-virtual {v2, v3, v4}, Landroid/os/PowerManager;->newWakeLock(ILjava/lang/String;)Landroid/os/PowerManager$WakeLock;

    move-result-object v3

    sput-object v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->mWakeLock:Landroid/os/PowerManager$WakeLock;

    .line 229
    sget-object v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->mWakeLock:Landroid/os/PowerManager$WakeLock;

    invoke-virtual {v3}, Landroid/os/PowerManager$WakeLock;->acquire()V

    .line 232
    sget-object v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->AndoridID:Ljava/lang/String;

    const-string v4, "org.cocos2dx.ForgottenOdyssey"

    invoke-virtual {v3, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 233
    new-instance v3, Ljava/lang/RuntimeException;

    const-string v4, "Please put your app\'s public key in MainActivity.java. See README."

    invoke-direct {v3, v4}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v3

    .line 239
    :cond_0
    new-instance v1, Landroid/util/DisplayMetrics;

    invoke-direct {v1}, Landroid/util/DisplayMetrics;-><init>()V

    .line 240
    .local v1, "dm":Landroid/util/DisplayMetrics;
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v3

    invoke-interface {v3}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v3

    invoke-virtual {v3, v1}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    .line 241
    new-instance v3, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    invoke-direct {v3, p0}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;-><init>(Landroid/content/Context;)V

    sput-object v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->accelerometer:Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    .line 244
    new-instance v3, Lorg/cocos2dx/lib/Cocos2dxMusic;

    invoke-direct {v3, p0}, Lorg/cocos2dx/lib/Cocos2dxMusic;-><init>(Landroid/content/Context;)V

    sput-object v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->backgroundMusicPlayer:Lorg/cocos2dx/lib/Cocos2dxMusic;

    .line 245
    new-instance v3, Lorg/cocos2dx/lib/Cocos2dxSound;

    invoke-direct {v3, p0}, Lorg/cocos2dx/lib/Cocos2dxSound;-><init>(Landroid/content/Context;)V

    sput-object v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->soundPlayer:Lorg/cocos2dx/lib/Cocos2dxSound;

    .line 248
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxBitmap;->setContext(Landroid/content/Context;)V

    .line 251
    new-instance v3, Lorg/cocos2dx/lib/Cocos2dxActivity$6;

    invoke-direct {v3, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity$6;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V

    sput-object v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->handler:Landroid/os/Handler;

    .line 264
    const-string v3, "TrivialDrive"

    const-string v4, "Creating IAB helper."

    invoke-static {v3, v4}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 265
    new-instance v3, Lcom/example/android/trivialdrivesample/util/IabHelper;

    sget-object v4, Lorg/cocos2dx/lib/Cocos2dxActivity;->AndoridID:Ljava/lang/String;

    invoke-direct {v3, p0, v4}, Lcom/example/android/trivialdrivesample/util/IabHelper;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    sput-object v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->mHelper:Lcom/example/android/trivialdrivesample/util/IabHelper;

    .line 268
    sget-object v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->mHelper:Lcom/example/android/trivialdrivesample/util/IabHelper;

    const/4 v4, 0x1

    invoke-virtual {v3, v4}, Lcom/example/android/trivialdrivesample/util/IabHelper;->enableDebugLogging(Z)V

    .line 270
    const-string v3, "TrivialDrive"

    const-string v4, "Starting setup."

    invoke-static {v3, v4}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 271
    sget-object v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->mHelper:Lcom/example/android/trivialdrivesample/util/IabHelper;

    new-instance v4, Lorg/cocos2dx/lib/Cocos2dxActivity$7;

    invoke-direct {v4, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity$7;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V

    nop

    nop

    nop

    .line 287
    return-void
.end method

.method public onDestroy()V
    .locals 2

    .prologue
    .line 667
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 670
    const-string v0, "TrivialDrive"

    const-string v1, "Destroying helper."

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 671
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mHelper:Lcom/example/android/trivialdrivesample/util/IabHelper;

    if-eqz v0, :cond_0

    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mHelper:Lcom/example/android/trivialdrivesample/util/IabHelper;

    invoke-virtual {v0}, Lcom/example/android/trivialdrivesample/util/IabHelper;->dispose()V

    .line 672
    :cond_0
    const/4 v0, 0x0

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mHelper:Lcom/example/android/trivialdrivesample/util/IabHelper;

    .line 673
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mChecker:Lcom/google/android/vending/licensing/LicenseChecker;

    invoke-virtual {v0}, Lcom/google/android/vending/licensing/LicenseChecker;->onDestroy()V

    .line 674
    return-void
.end method

.method public onKeyUp(ILandroid/view/KeyEvent;)Z
    .locals 6
    .param p1, "keyCode"    # I
    .param p2, "event"    # Landroid/view/KeyEvent;

    .prologue
    .line 912
    packed-switch p1, :pswitch_data_0

    .line 944
    :goto_0
    const/4 v4, 0x1

    return v4

    .line 915
    :pswitch_0
    const-string v0, "\uac8c\uc784 \uc885\ub8cc"

    .line 916
    .local v0, "alerTitle":Ljava/lang/String;
    const-string v1, "\uac8c\uc784\uc744 \uc885\ub8cc\ud558\uc2dc\uaca0\uc2b5\ub2c8\uae4c?"

    .line 917
    .local v1, "msg":Ljava/lang/String;
    const-string v3, "\uc608"

    .line 918
    .local v3, "yes":Ljava/lang/String;
    const-string v2, "\uc544\ub2c8\uc694"

    .line 920
    .local v2, "no":Ljava/lang/String;
    new-instance v4, Landroid/app/AlertDialog$Builder;

    invoke-direct {v4, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 921
    invoke-virtual {v4, v0}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v4

    .line 922
    invoke-virtual {v4, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v4

    .line 924
    new-instance v5, Lorg/cocos2dx/lib/Cocos2dxActivity$10;

    invoke-direct {v5, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity$10;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V

    .line 923
    invoke-virtual {v4, v3, v5}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v4

    .line 936
    new-instance v5, Lorg/cocos2dx/lib/Cocos2dxActivity$11;

    invoke-direct {v5, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity$11;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V

    .line 935
    invoke-virtual {v4, v2, v5}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v4

    .line 941
    invoke-virtual {v4}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    goto :goto_0

    .line 912
    :pswitch_data_0
    .packed-switch 0x4
        :pswitch_0
    .end packed-switch
.end method

.method protected onPause()V
    .locals 1

    .prologue
    .line 688
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    .line 689
    sget-boolean v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->accelerometerEnabled:Z

    if-eqz v0, :cond_0

    .line 690
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->accelerometer:Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->disable()V

    .line 692
    :cond_0
    return-void
.end method

.method protected onResume()V
    .locals 1

    .prologue
    .line 680
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 681
    sget-boolean v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->accelerometerEnabled:Z

    if-eqz v0, :cond_0

    .line 682
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->accelerometer:Lorg/cocos2dx/lib/Cocos2dxAccelerometer;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxAccelerometer;->enable()V

    .line 684
    :cond_0
    return-void
.end method

.method protected setPackageName(Ljava/lang/String;)V
    .locals 6
    .param p1, "packageName"    # Ljava/lang/String;

    .prologue
    .line 695
    sput-object p1, Lorg/cocos2dx/lib/Cocos2dxActivity;->packageName:Ljava/lang/String;

    .line 697
    const-string v0, ""

    .line 698
    .local v0, "apkFilePath":Ljava/lang/String;
    const/4 v1, 0x0

    .line 699
    .local v1, "appInfo":Landroid/content/pm/ApplicationInfo;
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getApplication()Landroid/app/Application;

    move-result-object v4

    invoke-virtual {v4}, Landroid/app/Application;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v3

    .line 701
    .local v3, "packMgmr":Landroid/content/pm/PackageManager;
    const/4 v4, 0x0

    :try_start_0
    invoke-virtual {v3, p1, v4}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    move-result-object v1

    .line 706
    iget-object v0, v1, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;

    .line 707
    const-string v4, "apk path"

    invoke-static {v4, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 710
    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->nativeSetPaths(Ljava/lang/String;)V

    .line 711
    return-void

    .line 702
    :catch_0
    move-exception v2

    .line 703
    .local v2, "e":Landroid/content/pm/PackageManager$NameNotFoundException;
    invoke-virtual {v2}, Landroid/content/pm/PackageManager$NameNotFoundException;->printStackTrace()V

    .line 704
    new-instance v4, Ljava/lang/RuntimeException;

    const-string v5, "Unable to locate assets, aborting..."

    invoke-direct {v4, v5}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v4
.end method

.method verifyDeveloperPayload(Lcom/example/android/trivialdrivesample/util/Purchase;)Z
    .locals 1
    .param p1, "p"    # Lcom/example/android/trivialdrivesample/util/Purchase;

    .prologue
    .line 407
    const/4 v0, 0x1

    return v0
.end method

.class Lorg/cocos2dx/lib/Cocos2dxActivity$MyLicenseCheckerCallback;
.super Ljava/lang/Object;
.source "Cocos2dxActivity.java"

# interfaces
.implements Lcom/google/android/vending/licensing/LicenseCheckerCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lorg/cocos2dx/lib/Cocos2dxActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "MyLicenseCheckerCallback"
.end annotation


# instance fields
.field final synthetic this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;


# direct methods
.method private constructor <init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V
    .locals 0

    .prologue
    .line 875
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$MyLicenseCheckerCallback;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lorg/cocos2dx/lib/Cocos2dxActivity;Lorg/cocos2dx/lib/Cocos2dxActivity$MyLicenseCheckerCallback;)V
    .locals 0

    .prologue
    .line 875
    invoke-direct {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxActivity$MyLicenseCheckerCallback;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V

    return-void
.end method


# virtual methods
.method public allow(I)V
    .locals 2
    .param p1, "reason"    # I

    .prologue
    .line 879
    const/4 v0, 0x1

    sput v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mValidation:I

    .line 880
    const-string v0, "\uc778\uc99d"

    const-string v1, "\uc778\uc99d \uc131\uacf5"

    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 881
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$MyLicenseCheckerCallback;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 888
    :cond_0
    return-void
.end method

.method public applicationError(I)V
    .locals 2
    .param p1, "errorCode"    # I

    .prologue
    .line 902
    const-string v0, "\uc778\uc99d"

    const-string v1, "\uc778\uc99d \uc624\ub958"

    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 904
    const/4 v0, 0x1

    sput v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mValidation:I

    .line 908
    return-void
.end method

.method public dontAllow(I)V
    .locals 2
    .param p1, "reason"    # I

    .prologue
    .line 893
    const-string v0, "\uc778\uc99d"

    const-string v1, "\uc778\uc99d \uc2e4\ud328"

    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 895
    const/4 v0, 0x1

    sput v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->mValidation:I

    .line 897
    return-void
.end method

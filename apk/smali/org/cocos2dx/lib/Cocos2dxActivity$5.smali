.class Lorg/cocos2dx/lib/Cocos2dxActivity$5;
.super Landroid/os/Handler;
.source "Cocos2dxActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lorg/cocos2dx/lib/Cocos2dxActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;


# direct methods
.method constructor <init>(Lorg/cocos2dx/lib/Cocos2dxActivity;)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$5;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    .line 747
    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method

.method static synthetic access$0(Lorg/cocos2dx/lib/Cocos2dxActivity$5;)Lorg/cocos2dx/lib/Cocos2dxActivity;
    .locals 1

    .prologue
    .line 747
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$5;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    return-object v0
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .prologue
    .line 750
    const-string v0, "TrivialDrive"

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 753
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxActivity$5$1;

    invoke-direct {v1, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity$5$1;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity$5;)V

    .line 765
    const-wide/16 v2, 0x1f4

    .line 753
    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 766
    return-void
.end method

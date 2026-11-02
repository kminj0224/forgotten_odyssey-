.class Lorg/cocos2dx/lib/Cocos2dxActivity$5$1;
.super Ljava/lang/Object;
.source "Cocos2dxActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lib/Cocos2dxActivity$5;->handleMessage(Landroid/os/Message;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lorg/cocos2dx/lib/Cocos2dxActivity$5;


# direct methods
.method constructor <init>(Lorg/cocos2dx/lib/Cocos2dxActivity$5;)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$5$1;->this$1:Lorg/cocos2dx/lib/Cocos2dxActivity$5;

    .line 753
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .prologue
    .line 761
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$5$1;->this$1:Lorg/cocos2dx/lib/Cocos2dxActivity$5;

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity$5;->access$0(Lorg/cocos2dx/lib/Cocos2dxActivity$5;)Lorg/cocos2dx/lib/Cocos2dxActivity;

    move-result-object v0

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$4(Lorg/cocos2dx/lib/Cocos2dxActivity;)V

    .line 763
    return-void
.end method

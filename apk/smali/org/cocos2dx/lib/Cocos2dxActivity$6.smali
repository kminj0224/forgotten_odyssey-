.class Lorg/cocos2dx/lib/Cocos2dxActivity$6;
.super Landroid/os/Handler;
.source "Cocos2dxActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lib/Cocos2dxActivity;->onCreate(Landroid/os/Bundle;)V
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
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$6;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    .line 251
    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;

    .prologue
    .line 254
    iget v0, p1, Landroid/os/Message;->what:I

    packed-switch v0, :pswitch_data_0

    .line 259
    :goto_0
    return-void

    .line 256
    :pswitch_0
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$6;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Lorg/cocos2dx/lib/DialogMessage;

    iget-object v2, v0, Lorg/cocos2dx/lib/DialogMessage;->title:Ljava/lang/String;

    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Lorg/cocos2dx/lib/DialogMessage;

    iget-object v0, v0, Lorg/cocos2dx/lib/DialogMessage;->message:Ljava/lang/String;

    invoke-static {v1, v2, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$5(Lorg/cocos2dx/lib/Cocos2dxActivity;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 254
    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_0
    .end packed-switch
.end method

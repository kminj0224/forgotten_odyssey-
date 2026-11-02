.class Lorg/cocos2dx/lib/Cocos2dxActivity$10;
.super Ljava/lang/Object;
.source "Cocos2dxActivity.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lib/Cocos2dxActivity;->onKeyUp(ILandroid/view/KeyEvent;)Z
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
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$10;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    .line 924
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 2
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "which"    # I

    .prologue
    .line 929
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$10;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->moveTaskToBack(Z)Z

    .line 930
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$10;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->finish()V

    .line 933
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v0

    .line 932
    invoke-static {v0}, Landroid/os/Process;->killProcess(I)V

    .line 934
    return-void
.end method

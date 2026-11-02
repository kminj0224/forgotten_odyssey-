.class Lorg/cocos2dx/lib/Cocos2dxActivity$9;
.super Ljava/lang/Object;
.source "Cocos2dxActivity.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lib/Cocos2dxActivity;->showDialogError(Ljava/lang/String;Ljava/lang/String;)V
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
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$9;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    .line 733
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 1
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "whichButton"    # I

    .prologue
    .line 737
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$9;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->finish()V

    .line 740
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v0

    .line 739
    invoke-static {v0}, Landroid/os/Process;->killProcess(I)V

    .line 741
    return-void
.end method

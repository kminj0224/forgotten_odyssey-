.class Lorg/cocos2dx/lib/Cocos2dxActivity$1$1;
.super Ljava/lang/Object;
.source "Cocos2dxActivity.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lib/Cocos2dxActivity$1;->handleMessage(Landroid/os/Message;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lorg/cocos2dx/lib/Cocos2dxActivity$1;


# direct methods
.method constructor <init>(Lorg/cocos2dx/lib/Cocos2dxActivity$1;)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$1$1;->this$1:Lorg/cocos2dx/lib/Cocos2dxActivity$1;

    .line 180
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 4
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "which"    # I

    .prologue
    .line 184
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->instance:Lorg/cocos2dx/lib/Cocos2dxActivity;

    new-instance v1, Landroid/content/Intent;

    const-string v2, "android.intent.action.VIEW"

    const-string v3, "market://details?id=org.cocos2dx.ForgottenOdyssey"

    invoke-static {v3}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->startActivity(Landroid/content/Intent;)V

    .line 185
    const/4 v0, 0x1

    sput v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->b_Rating:I

    .line 186
    return-void
.end method

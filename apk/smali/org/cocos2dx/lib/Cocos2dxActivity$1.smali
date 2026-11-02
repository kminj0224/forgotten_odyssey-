.class Lorg/cocos2dx/lib/Cocos2dxActivity$1;
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
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$1;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    .line 164
    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 7
    .param p1, "msg"    # Landroid/os/Message;

    .prologue
    .line 167
    iget v0, p1, Landroid/os/Message;->what:I

    .line 169
    .local v0, "Num":I
    if-nez v0, :cond_0

    .line 171
    const-string v1, "\u2605\u2605\ub9ac\ubdf0\ub97c \uc801\uc5b4 \uc8fc\uc138\uc694\u2605\u2605"

    .line 172
    .local v1, "alerTitle":Ljava/lang/String;
    const-string v2, "\ub9ac\ubdf0\ub97c \uc801\uc5b4\uc8fc\uc2e0 \ubd84\ub4e4\uaed8\ub294 \ub77c\ud30c\uc5d8 \uce90\ub9ad\ud130\ub97c\uc120\ubb3c\ub85c \ub4dc\ub9bd\ub2c8\ub2e4."

    .line 173
    .local v2, "msg1":Ljava/lang/String;
    const-string v4, "\uc774\ub3d9"

    .line 174
    .local v4, "yes":Ljava/lang/String;
    const-string v3, "\uc544\ub2c8\uc694"

    .line 176
    .local v3, "no":Ljava/lang/String;
    new-instance v5, Landroid/app/AlertDialog$Builder;

    sget-object v6, Lorg/cocos2dx/lib/Cocos2dxActivity;->instance:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-direct {v5, v6}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 177
    invoke-virtual {v5, v1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v5

    .line 178
    invoke-virtual {v5, v2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v5

    .line 180
    new-instance v6, Lorg/cocos2dx/lib/Cocos2dxActivity$1$1;

    invoke-direct {v6, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity$1$1;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity$1;)V

    .line 179
    invoke-virtual {v5, v4, v6}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v5

    .line 188
    new-instance v6, Lorg/cocos2dx/lib/Cocos2dxActivity$1$2;

    invoke-direct {v6, p0}, Lorg/cocos2dx/lib/Cocos2dxActivity$1$2;-><init>(Lorg/cocos2dx/lib/Cocos2dxActivity$1;)V

    .line 187
    invoke-virtual {v5, v3, v6}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v5

    .line 193
    invoke-virtual {v5}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    .line 197
    .end local v1    # "alerTitle":Ljava/lang/String;
    .end local v2    # "msg1":Ljava/lang/String;
    .end local v3    # "no":Ljava/lang/String;
    .end local v4    # "yes":Ljava/lang/String;
    :cond_0
    return-void
.end method

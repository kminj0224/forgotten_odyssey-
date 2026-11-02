.class public Lorg/cocos2dx/ForgottenOdyssey/ForgottenOdyssey;
.super Lorg/cocos2dx/lib/Cocos2dxActivity;
.source "ForgottenOdyssey.java"


# instance fields
.field private mGLView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .prologue
    .line 66
    const-string v0, "cocosdenshion"

    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

    .line 67
    const-string v0, "gamedaylib"

    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

    .line 68
    const-string v0, "game"

    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

    .line 69
    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .prologue
    .line 32
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;-><init>()V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .prologue
    .line 38
    invoke-super {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onCreate(Landroid/os/Bundle;)V

    .line 40
    invoke-virtual {p0}, Lorg/cocos2dx/ForgottenOdyssey/ForgottenOdyssey;->getApplication()Landroid/app/Application;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/Application;->getPackageName()Ljava/lang/String;

    move-result-object v0

    .line 41
    .local v0, "packageName":Ljava/lang/String;
    invoke-super {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->setPackageName(Ljava/lang/String;)V

    .line 43
    const/high16 v1, 0x7f030000

    invoke-virtual {p0, v1}, Lorg/cocos2dx/ForgottenOdyssey/ForgottenOdyssey;->setContentView(I)V

    .line 44
    const v1, 0x7f050001

    invoke-virtual {p0, v1}, Lorg/cocos2dx/ForgottenOdyssey/ForgottenOdyssey;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    iput-object v1, p0, Lorg/cocos2dx/ForgottenOdyssey/ForgottenOdyssey;->mGLView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    .line 45
    iget-object v2, p0, Lorg/cocos2dx/ForgottenOdyssey/ForgottenOdyssey;->mGLView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    const/high16 v1, 0x7f050000

    invoke-virtual {p0, v1}, Lorg/cocos2dx/ForgottenOdyssey/ForgottenOdyssey;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lorg/cocos2dx/lib/Cocos2dxEditText;

    invoke-virtual {v2, v1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setTextField(Lorg/cocos2dx/lib/Cocos2dxEditText;)V

    .line 47
    return-void
.end method

.method protected onPause()V
    .locals 1

    .prologue
    .line 55
    invoke-super {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onPause()V

    .line 56
    iget-object v0, p0, Lorg/cocos2dx/ForgottenOdyssey/ForgottenOdyssey;->mGLView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->onPause()V

    .line 57
    return-void
.end method

.method protected onResume()V
    .locals 1

    .prologue
    .line 61
    invoke-super {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onResume()V

    .line 62
    iget-object v0, p0, Lorg/cocos2dx/ForgottenOdyssey/ForgottenOdyssey;->mGLView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->onResume()V

    .line 63
    return-void
.end method

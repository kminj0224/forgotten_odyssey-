.class Lorg/cocos2dx/lib/Cocos2dxActivity$7;
.super Ljava/lang/Object;
.source "Cocos2dxActivity.java"

# interfaces
.implements Lcom/example/android/trivialdrivesample/util/IabHelper$OnIabSetupFinishedListener;


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
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$7;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    .line 271
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onIabSetupFinished(Lcom/example/android/trivialdrivesample/util/IabResult;)V
    .locals 3
    .param p1, "result"    # Lcom/example/android/trivialdrivesample/util/IabResult;

    .prologue
    .line 274
    const-string v0, "TrivialDrive"

    const-string v1, "Setup finished."

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 276
    invoke-virtual {p1}, Lcom/example/android/trivialdrivesample/util/IabResult;->isSuccess()Z

    move-result v0

    if-nez v0, :cond_0

    .line 278
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$7;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Problem setting up in-app billing: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->complain(Ljava/lang/String;)V

    .line 283
    :goto_0
    return-void

    .line 281
    :cond_0
    const-string v0, "TrivialDrive"

    const-string v1, "Setup successful. Querying inventory."

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 282
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$2()Lcom/example/android/trivialdrivesample/util/IabHelper;

    move-result-object v0

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$7;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v1, v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->mGotInventoryListener:Lcom/example/android/trivialdrivesample/util/IabHelper$QueryInventoryFinishedListener;

    invoke-virtual {v0, v1}, Lcom/example/android/trivialdrivesample/util/IabHelper;->queryInventoryAsync(Lcom/example/android/trivialdrivesample/util/IabHelper$QueryInventoryFinishedListener;)V

    goto :goto_0
.end method

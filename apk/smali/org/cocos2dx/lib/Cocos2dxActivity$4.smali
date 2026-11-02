.class Lorg/cocos2dx/lib/Cocos2dxActivity$4;
.super Ljava/lang/Object;
.source "Cocos2dxActivity.java"

# interfaces
.implements Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;


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
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$4;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    .line 501
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onConsumeFinished(Lcom/example/android/trivialdrivesample/util/Purchase;Lcom/example/android/trivialdrivesample/util/IabResult;)V
    .locals 3
    .param p1, "purchase"    # Lcom/example/android/trivialdrivesample/util/Purchase;
    .param p2, "result"    # Lcom/example/android/trivialdrivesample/util/IabResult;

    .prologue
    .line 504
    const-string v0, "TrivialDrive"

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Consumption finished. Purchase: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v1

    const-string v2, ", result: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 506
    invoke-virtual {p2}, Lcom/example/android/trivialdrivesample/util/IabResult;->isSuccess()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 508
    const-string v0, "TrivialDrive"

    const-string v1, "\uad6c\ub9e4 \uc131\uacf5!!!!!!!!!!!"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 514
    :cond_0
    sget v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->returnCP:I

    if-eqz v0, :cond_1

    .line 516
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$4;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "\ucc98\ub9ac\ud558\uc9c0 \ubabb\ud55c CP"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget v2, Lorg/cocos2dx/lib/Cocos2dxActivity;->returnCP:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v1

    const-string v2, "\uc9c0\uae09\ud558\uc600\uc2b5\ub2c8\ub2e4."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->alert(Ljava/lang/String;)V

    .line 519
    :cond_1
    const-string v0, "TrivialDrive"

    const-string v1, "OnConsumeFinishedListener"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 523
    const-string v0, "TrivialDrive"

    const-string v1, "End consumption flow."

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 524
    return-void
.end method

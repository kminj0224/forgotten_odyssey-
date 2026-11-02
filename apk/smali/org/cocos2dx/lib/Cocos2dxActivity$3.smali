.class Lorg/cocos2dx/lib/Cocos2dxActivity$3;
.super Ljava/lang/Object;
.source "Cocos2dxActivity.java"

# interfaces
.implements Lcom/example/android/trivialdrivesample/util/IabHelper$OnIabPurchaseFinishedListener;


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
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$3;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    .line 413
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onIabPurchaseFinished(Lcom/example/android/trivialdrivesample/util/IabResult;Lcom/example/android/trivialdrivesample/util/Purchase;)V
    .locals 3
    .param p1, "result"    # Lcom/example/android/trivialdrivesample/util/IabResult;
    .param p2, "purchase"    # Lcom/example/android/trivialdrivesample/util/Purchase;

    .prologue
    .line 416
    const-string v0, "TrivialDrive"

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Purchase finished: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v1

    const-string v2, ", purchase: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 417
    const-string v0, "TrivialDrive"

    const-string v1, "OnIabPurchaseFinishedListener"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 420
    invoke-virtual {p1}, Lcom/example/android/trivialdrivesample/util/IabResult;->isFailure()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 497
    :cond_0
    :goto_0
    return-void

    .line 428
    :cond_1
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$3;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v0, p2}, Lorg/cocos2dx/lib/Cocos2dxActivity;->verifyDeveloperPayload(Lcom/example/android/trivialdrivesample/util/Purchase;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 440
    const-string v0, "bcp100"

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$0(Ljava/lang/String;)V

    .line 441
    invoke-virtual {p2}, Lcom/example/android/trivialdrivesample/util/Purchase;->getSku()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 443
    const/16 v0, 0x64

    sput v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->BuyCP:I

    .line 444
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$3;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    sget v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->BuyCP:I

    invoke-static {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$3(Lorg/cocos2dx/lib/Cocos2dxActivity;I)V

    .line 445
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$2()Lcom/example/android/trivialdrivesample/util/IabHelper;

    move-result-object v0

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$3;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v1, v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->mConsumeFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;

    invoke-virtual {v0, p2, v1}, Lcom/example/android/trivialdrivesample/util/IabHelper;->consumeAsync(Lcom/example/android/trivialdrivesample/util/Purchase;Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;)V

    goto :goto_0

    .line 449
    :cond_2
    const-string v0, "bcp600"

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$0(Ljava/lang/String;)V

    .line 450
    invoke-virtual {p2}, Lcom/example/android/trivialdrivesample/util/Purchase;->getSku()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 452
    const/16 v0, 0x258

    sput v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->BuyCP:I

    .line 453
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$3;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    sget v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->BuyCP:I

    invoke-static {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$3(Lorg/cocos2dx/lib/Cocos2dxActivity;I)V

    .line 454
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$2()Lcom/example/android/trivialdrivesample/util/IabHelper;

    move-result-object v0

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$3;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v1, v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->mConsumeFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;

    invoke-virtual {v0, p2, v1}, Lcom/example/android/trivialdrivesample/util/IabHelper;->consumeAsync(Lcom/example/android/trivialdrivesample/util/Purchase;Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;)V

    goto :goto_0

    .line 458
    :cond_3
    const-string v0, "bcp1300"

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$0(Ljava/lang/String;)V

    .line 459
    invoke-virtual {p2}, Lcom/example/android/trivialdrivesample/util/Purchase;->getSku()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 461
    const/16 v0, 0x514

    sput v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->BuyCP:I

    .line 462
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$3;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    sget v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->BuyCP:I

    invoke-static {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$3(Lorg/cocos2dx/lib/Cocos2dxActivity;I)V

    .line 463
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$2()Lcom/example/android/trivialdrivesample/util/IabHelper;

    move-result-object v0

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$3;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v1, v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->mConsumeFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;

    invoke-virtual {v0, p2, v1}, Lcom/example/android/trivialdrivesample/util/IabHelper;->consumeAsync(Lcom/example/android/trivialdrivesample/util/Purchase;Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;)V

    goto/16 :goto_0

    .line 467
    :cond_4
    const-string v0, "bcp4000"

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$0(Ljava/lang/String;)V

    .line 468
    invoke-virtual {p2}, Lcom/example/android/trivialdrivesample/util/Purchase;->getSku()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 470
    const/16 v0, 0xfa0

    sput v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->BuyCP:I

    .line 471
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$3;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    sget v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->BuyCP:I

    invoke-static {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$3(Lorg/cocos2dx/lib/Cocos2dxActivity;I)V

    .line 472
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$2()Lcom/example/android/trivialdrivesample/util/IabHelper;

    move-result-object v0

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$3;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v1, v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->mConsumeFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;

    invoke-virtual {v0, p2, v1}, Lcom/example/android/trivialdrivesample/util/IabHelper;->consumeAsync(Lcom/example/android/trivialdrivesample/util/Purchase;Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;)V

    goto/16 :goto_0

    .line 476
    :cond_5
    const-string v0, "bcp6200"

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$0(Ljava/lang/String;)V

    .line 477
    invoke-virtual {p2}, Lcom/example/android/trivialdrivesample/util/Purchase;->getSku()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 479
    const/16 v0, 0x1838

    sput v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->BuyCP:I

    .line 480
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$3;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    sget v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->BuyCP:I

    invoke-static {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$3(Lorg/cocos2dx/lib/Cocos2dxActivity;I)V

    .line 481
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$2()Lcom/example/android/trivialdrivesample/util/IabHelper;

    move-result-object v0

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$3;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v1, v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->mConsumeFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;

    invoke-virtual {v0, p2, v1}, Lcom/example/android/trivialdrivesample/util/IabHelper;->consumeAsync(Lcom/example/android/trivialdrivesample/util/Purchase;Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;)V

    goto/16 :goto_0

    .line 485
    :cond_6
    const-string v0, "bcp15000"

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$0(Ljava/lang/String;)V

    .line 486
    invoke-virtual {p2}, Lcom/example/android/trivialdrivesample/util/Purchase;->getSku()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 488
    const/16 v0, 0x3a98

    sput v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->BuyCP:I

    .line 489
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$3;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    sget v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->BuyCP:I

    invoke-static {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$3(Lorg/cocos2dx/lib/Cocos2dxActivity;I)V

    .line 490
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$2()Lcom/example/android/trivialdrivesample/util/IabHelper;

    move-result-object v0

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$3;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v1, v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->mConsumeFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;

    invoke-virtual {v0, p2, v1}, Lcom/example/android/trivialdrivesample/util/IabHelper;->consumeAsync(Lcom/example/android/trivialdrivesample/util/Purchase;Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;)V

    goto/16 :goto_0
.end method

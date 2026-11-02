.class Lorg/cocos2dx/lib/Cocos2dxActivity$2;
.super Ljava/lang/Object;
.source "Cocos2dxActivity.java"

# interfaces
.implements Lcom/example/android/trivialdrivesample/util/IabHelper$QueryInventoryFinishedListener;


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
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$2;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    .line 313
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onQueryInventoryFinished(Lcom/example/android/trivialdrivesample/util/IabResult;Lcom/example/android/trivialdrivesample/util/Inventory;)V
    .locals 4
    .param p1, "result"    # Lcom/example/android/trivialdrivesample/util/IabResult;
    .param p2, "inventory"    # Lcom/example/android/trivialdrivesample/util/Inventory;

    .prologue
    .line 316
    const-string v1, "TrivialDrive"

    const-string v2, "Query inventory finished."

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 317
    invoke-virtual {p1}, Lcom/example/android/trivialdrivesample/util/IabResult;->isFailure()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 378
    :goto_0
    return-void

    .line 323
    :cond_0
    const-string v1, "bcp100"

    invoke-static {v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$0(Ljava/lang/String;)V

    .line 324
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Lcom/example/android/trivialdrivesample/util/Inventory;->getPurchase(Ljava/lang/String;)Lcom/example/android/trivialdrivesample/util/Purchase;

    move-result-object v0

    .line 325
    .local v0, "gasPurchase":Lcom/example/android/trivialdrivesample/util/Purchase;
    if-eqz v0, :cond_1

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$2;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v1, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->verifyDeveloperPayload(Lcom/example/android/trivialdrivesample/util/Purchase;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 326
    const-string v1, "TrivialDrive"

    const-string v2, "We have gas. Consuming it."

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 327
    const/16 v1, 0x64

    sput v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->returnCP:I

    .line 328
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$2()Lcom/example/android/trivialdrivesample/util/IabHelper;

    move-result-object v1

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2}, Lcom/example/android/trivialdrivesample/util/Inventory;->getPurchase(Ljava/lang/String;)Lcom/example/android/trivialdrivesample/util/Purchase;

    move-result-object v2

    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$2;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v3, v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->mConsumeFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;

    invoke-virtual {v1, v2, v3}, Lcom/example/android/trivialdrivesample/util/IabHelper;->consumeAsync(Lcom/example/android/trivialdrivesample/util/Purchase;Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;)V

    goto :goto_0

    .line 332
    :cond_1
    const-string v1, "bcp600"

    invoke-static {v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$0(Ljava/lang/String;)V

    .line 333
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Lcom/example/android/trivialdrivesample/util/Inventory;->getPurchase(Ljava/lang/String;)Lcom/example/android/trivialdrivesample/util/Purchase;

    move-result-object v0

    .line 334
    if-eqz v0, :cond_2

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$2;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v1, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->verifyDeveloperPayload(Lcom/example/android/trivialdrivesample/util/Purchase;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 335
    const-string v1, "TrivialDrive"

    const-string v2, "We have gas. Consuming it."

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 336
    const/16 v1, 0x258

    sput v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->returnCP:I

    .line 337
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$2()Lcom/example/android/trivialdrivesample/util/IabHelper;

    move-result-object v1

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2}, Lcom/example/android/trivialdrivesample/util/Inventory;->getPurchase(Ljava/lang/String;)Lcom/example/android/trivialdrivesample/util/Purchase;

    move-result-object v2

    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$2;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v3, v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->mConsumeFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;

    invoke-virtual {v1, v2, v3}, Lcom/example/android/trivialdrivesample/util/IabHelper;->consumeAsync(Lcom/example/android/trivialdrivesample/util/Purchase;Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;)V

    goto :goto_0

    .line 341
    :cond_2
    const-string v1, "bcp1300"

    invoke-static {v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$0(Ljava/lang/String;)V

    .line 342
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Lcom/example/android/trivialdrivesample/util/Inventory;->getPurchase(Ljava/lang/String;)Lcom/example/android/trivialdrivesample/util/Purchase;

    move-result-object v0

    .line 343
    if-eqz v0, :cond_3

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$2;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v1, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->verifyDeveloperPayload(Lcom/example/android/trivialdrivesample/util/Purchase;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 344
    const-string v1, "TrivialDrive"

    const-string v2, "We have gas. Consuming it."

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 345
    const/16 v1, 0x514

    sput v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->returnCP:I

    .line 346
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$2()Lcom/example/android/trivialdrivesample/util/IabHelper;

    move-result-object v1

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2}, Lcom/example/android/trivialdrivesample/util/Inventory;->getPurchase(Ljava/lang/String;)Lcom/example/android/trivialdrivesample/util/Purchase;

    move-result-object v2

    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$2;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v3, v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->mConsumeFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;

    invoke-virtual {v1, v2, v3}, Lcom/example/android/trivialdrivesample/util/IabHelper;->consumeAsync(Lcom/example/android/trivialdrivesample/util/Purchase;Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;)V

    goto/16 :goto_0

    .line 350
    :cond_3
    const-string v1, "bcp4000"

    invoke-static {v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$0(Ljava/lang/String;)V

    .line 351
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Lcom/example/android/trivialdrivesample/util/Inventory;->getPurchase(Ljava/lang/String;)Lcom/example/android/trivialdrivesample/util/Purchase;

    move-result-object v0

    .line 352
    if-eqz v0, :cond_4

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$2;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v1, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->verifyDeveloperPayload(Lcom/example/android/trivialdrivesample/util/Purchase;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 353
    const-string v1, "TrivialDrive"

    const-string v2, "We have gas. Consuming it."

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 354
    const/16 v1, 0xfa0

    sput v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->returnCP:I

    .line 355
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$2()Lcom/example/android/trivialdrivesample/util/IabHelper;

    move-result-object v1

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2}, Lcom/example/android/trivialdrivesample/util/Inventory;->getPurchase(Ljava/lang/String;)Lcom/example/android/trivialdrivesample/util/Purchase;

    move-result-object v2

    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$2;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v3, v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->mConsumeFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;

    invoke-virtual {v1, v2, v3}, Lcom/example/android/trivialdrivesample/util/IabHelper;->consumeAsync(Lcom/example/android/trivialdrivesample/util/Purchase;Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;)V

    goto/16 :goto_0

    .line 359
    :cond_4
    const-string v1, "bcp6200"

    invoke-static {v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$0(Ljava/lang/String;)V

    .line 360
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Lcom/example/android/trivialdrivesample/util/Inventory;->getPurchase(Ljava/lang/String;)Lcom/example/android/trivialdrivesample/util/Purchase;

    move-result-object v0

    .line 361
    if-eqz v0, :cond_5

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$2;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v1, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->verifyDeveloperPayload(Lcom/example/android/trivialdrivesample/util/Purchase;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 362
    const-string v1, "TrivialDrive"

    const-string v2, "We have gas. Consuming it."

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 363
    const/16 v1, 0x1838

    sput v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->returnCP:I

    .line 364
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$2()Lcom/example/android/trivialdrivesample/util/IabHelper;

    move-result-object v1

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2}, Lcom/example/android/trivialdrivesample/util/Inventory;->getPurchase(Ljava/lang/String;)Lcom/example/android/trivialdrivesample/util/Purchase;

    move-result-object v2

    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$2;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v3, v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->mConsumeFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;

    invoke-virtual {v1, v2, v3}, Lcom/example/android/trivialdrivesample/util/IabHelper;->consumeAsync(Lcom/example/android/trivialdrivesample/util/Purchase;Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;)V

    goto/16 :goto_0

    .line 368
    :cond_5
    const-string v1, "bcp15000"

    invoke-static {v1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$0(Ljava/lang/String;)V

    .line 369
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Lcom/example/android/trivialdrivesample/util/Inventory;->getPurchase(Ljava/lang/String;)Lcom/example/android/trivialdrivesample/util/Purchase;

    move-result-object v0

    .line 370
    if-eqz v0, :cond_6

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$2;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v1, v0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->verifyDeveloperPayload(Lcom/example/android/trivialdrivesample/util/Purchase;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 371
    const-string v1, "TrivialDrive"

    const-string v2, "We have gas. Consuming it."

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 372
    const/16 v1, 0x3a98

    sput v1, Lorg/cocos2dx/lib/Cocos2dxActivity;->returnCP:I

    .line 373
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$2()Lcom/example/android/trivialdrivesample/util/IabHelper;

    move-result-object v1

    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->access$1()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2}, Lcom/example/android/trivialdrivesample/util/Inventory;->getPurchase(Ljava/lang/String;)Lcom/example/android/trivialdrivesample/util/Purchase;

    move-result-object v2

    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxActivity$2;->this$0:Lorg/cocos2dx/lib/Cocos2dxActivity;

    iget-object v3, v3, Lorg/cocos2dx/lib/Cocos2dxActivity;->mConsumeFinishedListener:Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;

    invoke-virtual {v1, v2, v3}, Lcom/example/android/trivialdrivesample/util/IabHelper;->consumeAsync(Lcom/example/android/trivialdrivesample/util/Purchase;Lcom/example/android/trivialdrivesample/util/IabHelper$OnConsumeFinishedListener;)V

    goto/16 :goto_0

    .line 377
    :cond_6
    const-string v1, "TrivialDrive"

    const-string v2, "Initial inventory query finished; enabling main UI."

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto/16 :goto_0
.end method

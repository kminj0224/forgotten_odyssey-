.class public Lorg/cocos2dx/lib/Cocos2dxDeviceData;
.super Ljava/lang/Object;
.source "Cocos2dxDeviceData.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .prologue
    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public Get_DeviceId()V
    .locals 0

    .prologue
    .line 14
    return-void
.end method

.method public Get_DeviceType()V
    .locals 3

    .prologue
    .line 17
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    .line 19
    .local v0, "version":I
    packed-switch v0, :pswitch_data_0

    .line 62
    :goto_0
    return-void

    .line 21
    :pswitch_0
    const-string v1, "VERSION"

    const-string v2, "? 1.1"

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 24
    :pswitch_1
    const-string v1, "VERSION"

    const-string v2, "CUPCAKE 1.5"

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 27
    :pswitch_2
    const-string v1, "VERSION"

    const-string v2, "DONUT 1.6"

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 30
    :pswitch_3
    const-string v1, "VERSION"

    const-string v2, "ECLAIR 2.0"

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 33
    :pswitch_4
    const-string v1, "VERSION"

    const-string v2, "ECLAIR 2.0.1"

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 36
    :pswitch_5
    const-string v1, "VERSION"

    const-string v2, "ECLAIR 2.1"

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 39
    :pswitch_6
    const-string v1, "VERSION"

    const-string v2, "FROYO 2.2"

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 42
    :pswitch_7
    const-string v1, "VERSION"

    const-string v2, "GINGERBREAD 2.3"

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 45
    :pswitch_8
    const-string v1, "VERSION"

    const-string v2, "GINGERBREAD 2.3.3-2.3.4"

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 48
    :pswitch_9
    const-string v1, "VERSION"

    const-string v2, "HONEYCOMB 3.0"

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 51
    :pswitch_a
    const-string v1, "VERSION"

    const-string v2, "HONEYCOMB 3.1"

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 54
    :pswitch_b
    const-string v1, "VERSION"

    const-string v2, "HONEYCOMB 3.2"

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 57
    :pswitch_c
    const-string v1, "VERSION"

    const-string v2, "ICECREAMCAKE 4.0"

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 19
    :pswitch_data_0
    .packed-switch 0x2
        :pswitch_0
        :pswitch_1
        :pswitch_2
        :pswitch_3
        :pswitch_4
        :pswitch_5
        :pswitch_6
        :pswitch_7
        :pswitch_8
        :pswitch_9
        :pswitch_a
        :pswitch_b
        :pswitch_c
    .end packed-switch
.end method

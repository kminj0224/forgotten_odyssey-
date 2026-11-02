.class Lorg/cocos2dx/lib/Cocos2dxSound$1;
.super Ljava/lang/Object;
.source "Cocos2dxSound.java"

# interfaces
.implements Landroid/media/SoundPool$OnLoadCompleteListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lib/Cocos2dxSound;->playEffect(Ljava/lang/String;Z)I
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/cocos2dx/lib/Cocos2dxSound;

.field private final synthetic val$isLoop:Z

.field private final synthetic val$path:Ljava/lang/String;


# direct methods
.method constructor <init>(Lorg/cocos2dx/lib/Cocos2dxSound;Ljava/lang/String;Z)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound$1;->this$0:Lorg/cocos2dx/lib/Cocos2dxSound;

    iput-object p2, p0, Lorg/cocos2dx/lib/Cocos2dxSound$1;->val$path:Ljava/lang/String;

    iput-boolean p3, p0, Lorg/cocos2dx/lib/Cocos2dxSound$1;->val$isLoop:Z

    .line 136
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onLoadComplete(Landroid/media/SoundPool;II)V
    .locals 3
    .param p1, "soundPool"    # Landroid/media/SoundPool;
    .param p2, "sampleId"    # I
    .param p3, "status"    # I

    .prologue
    .line 140
    if-nez p3, :cond_0

    .line 141
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound$1;->this$0:Lorg/cocos2dx/lib/Cocos2dxSound;

    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound$1;->val$path:Ljava/lang/String;

    iget-boolean v2, p0, Lorg/cocos2dx/lib/Cocos2dxSound$1;->val$isLoop:Z

    invoke-virtual {v0, v1, v2}, Lorg/cocos2dx/lib/Cocos2dxSound;->playEffect(Ljava/lang/String;Z)I

    .line 142
    :cond_0
    return-void
.end method

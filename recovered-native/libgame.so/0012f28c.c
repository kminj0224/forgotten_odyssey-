/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012f28c  Symbol: MainScene */

/* MainScene::MainScene() */

MainScene * __thiscall MainScene::MainScene(MainScene *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_0012f2c0 + 0x12f29e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}



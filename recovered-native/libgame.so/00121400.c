/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00121400  Symbol: GameScene */

/* GameScene::GameScene() */

GameScene * __thiscall GameScene::GameScene(GameScene *this)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar3 = *(int *)(DAT_00121474 + 0x121412);
  *(int *)this = iVar3 + 8;
  *(int *)(this + 0xfc) = iVar3 + 0x140;
  *(int *)(this + 0x104) = iVar3 + 0x17c;
  *(int *)(this + 0x100) = iVar3 + 0x170;
  cocos2d::CCSize::CCSize((CCSize *)(this + 0x114));
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + DAT_00121478));
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x528));
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + DAT_0012147c));
  pvVar2 = operator_new(0x4c);
  **(void ***)(DAT_00121480 + 0x12145e) = pvVar2;
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 0x38;
    iVar3 = iVar3 + 1;
    *(undefined *)((int)pvVar2 + iVar1) = 0;
  } while (iVar3 != 0x14);
  return this;
}



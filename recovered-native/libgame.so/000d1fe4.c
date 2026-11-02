/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d1fe4  Symbol: goPlay */

/* InventoryLayer::goPlay(cocos2d::CCObject*) */

void InventoryLayer::goPlay(CCObject *param_1)

{
  UI_Notice *this;
  int iVar1;
  CCNode *this_00;
  int *piVar2;
  float fVar3;
  
  piVar2 = *(int **)(DAT_000d2048 + 0xd1fee);
  if (*piVar2 != 7) {
    this = (UI_Notice *)operator_new(0x110);
    UI_Notice::UI_Notice(this);
    iVar1 = (**(code **)(*(int *)param_1 + 0x90))(param_1);
    UI_Notice::Inventory_slot_Plus((CCLayer *)this,iVar1);
    cocos2d::CCObject::release((CCObject *)this);
    *piVar2 = 7;
    this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,600);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(this_00,0);
    fVar3 = (float)(**(code **)(*piVar2 + 0x114))(piVar2,0);
    cocos2d::CCNode::setScale((CCNode *)this,fVar3);
  }
  return;
}



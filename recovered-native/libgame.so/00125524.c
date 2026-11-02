/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00125524  Symbol: Plus_Inventory */

/* GameScene::Plus_Inventory(cocos2d::CCObject*) */

void GameScene::Plus_Inventory(CCObject *param_1)

{
  UI_Notice *this;
  
  this = (UI_Notice *)operator_new(0x110);
  UI_Notice::UI_Notice(this);
  UI_Notice::Inventory_slot_Plus((CCLayer *)this,(int)param_1);
  cocos2d::CCObject::release((CCObject *)this);
  return;
}



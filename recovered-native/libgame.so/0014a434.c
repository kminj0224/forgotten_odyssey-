/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a434  Symbol: initWithLayer */

/* cocos2d::CCLayerMultiplex::initWithLayer(cocos2d::CCLayer*) */

undefined8 __thiscall
cocos2d::CCLayerMultiplex::initWithLayer(CCLayerMultiplex *this,CCLayer *param_1)

{
  int *this_00;
  int iVar1;
  
  this_00 = (int *)operator_new(0x20);
  CCObject::CCObject((CCObject *)this_00);
  iVar1 = *(int *)(DAT_0014a484 + 0x14a450);
  this_00[5] = 0;
  *this_00 = iVar1 + 8;
  this_00[6] = 0;
  this_00[7] = 0;
  std::vector<cocos2d::CCLayer*,std::allocator<cocos2d::CCLayer*>>::reserve
            ((vector<cocos2d::CCLayer*,std::allocator<cocos2d::CCLayer*>> *)(this_00 + 5),1);
  *(int **)(this + 0x114) = this_00;
  CCMutableArray<cocos2d::CCLayer*>::addObject((CCMutableArray<cocos2d::CCLayer*> *)this_00,param_1)
  ;
  *(undefined4 *)(this + 0x110) = 0;
  (**(code **)(*(int *)this + 0xc4))(this,param_1);
  return CONCAT44(this,1);
}



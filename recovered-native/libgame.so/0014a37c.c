/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a37c  Symbol: initWithLayers */

/* cocos2d::CCLayerMultiplex::initWithLayers(cocos2d::CCLayer*, std::__va_list) */

undefined8 __thiscall
cocos2d::CCLayerMultiplex::initWithLayers(CCLayerMultiplex *this,CCLayer *param_1,__va_list param_2)

{
  int *this_00;
  undefined4 uVar1;
  CCLayer *pCVar2;
  
  this_00 = (int *)operator_new(0x20);
  CCObject::CCObject((CCObject *)this_00);
  *this_00 = *(int *)(DAT_0014a3e8 + 0x14a39a) + 8;
  this_00[5] = 0;
  this_00[6] = 0;
  this_00[7] = 0;
  std::vector<cocos2d::CCLayer*,std::allocator<cocos2d::CCLayer*>>::reserve
            ((vector<cocos2d::CCLayer*,std::allocator<cocos2d::CCLayer*>> *)(this_00 + 5),5);
  *(int **)(this + 0x114) = this_00;
  CCMutableArray<cocos2d::CCLayer*>::addObject((CCMutableArray<cocos2d::CCLayer*> *)this_00,param_1)
  ;
  pCVar2 = *(CCLayer **)param_2;
  while (param_2 = param_2 + 4, pCVar2 != (CCLayer *)0x0) {
    CCMutableArray<cocos2d::CCLayer*>::addObject
              (*(CCMutableArray<cocos2d::CCLayer*> **)(this + 0x114),pCVar2);
    pCVar2 = *(CCLayer **)param_2;
  }
  *(undefined4 *)(this + 0x110) = 0;
  uVar1 = CCMutableArray<cocos2d::CCLayer*>::getObjectAtIndex
                    (*(CCMutableArray<cocos2d::CCLayer*> **)(this + 0x114),0);
  (**(code **)(*(int *)this + 0xc4))(this,uVar1);
  return CONCAT44(this,1);
}



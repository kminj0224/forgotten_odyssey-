/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a3ec  Symbol: layerWithLayers */

/* cocos2d::CCLayerMultiplex::layerWithLayers(cocos2d::CCLayer*, ...) */

undefined8 cocos2d::CCLayerMultiplex::layerWithLayers(CCLayer *param_1,...)

{
  int *this;
  int iVar1;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = in_r1;
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  this = (int *)operator_new(0x118);
  CCLayerMultiplex((CCLayerMultiplex *)this);
  if (this != (int *)0x0) {
    iVar1 = initWithLayers((CCLayerMultiplex *)this,param_1,(__va_list)&uStack_c);
    if (iVar1 == 0) {
      (**(code **)(*this + 8))(this);
      this = (int *)0x0;
    }
    else {
      CCObject::autorelease((CCObject *)this);
    }
  }
  return CONCAT44(param_1,this);
}



/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149ef8  Symbol: layerWithColorWidthHeight */

/* cocos2d::CCLayerColor::layerWithColorWidthHeight(cocos2d::_ccColor4B const&, float, float) */

undefined8
cocos2d::CCLayerColor::layerWithColorWidthHeight(_ccColor4B *param_1,float param_2,float param_3)

{
  int *this;
  int iVar1;
  undefined4 in_r1;
  undefined4 in_r2;
  
  this = (int *)operator_new(0x154);
  CCLayerColor((CCLayerColor *)this);
  if (this != (int *)0x0) {
    iVar1 = (**(code **)(*this + 0x128))(this,param_1,in_r1,in_r2);
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



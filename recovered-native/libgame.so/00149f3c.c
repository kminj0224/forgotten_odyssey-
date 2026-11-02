/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149f3c  Symbol: layerWithColor */

/* cocos2d::CCLayerColor::layerWithColor(cocos2d::_ccColor4B const&) */

int * cocos2d::CCLayerColor::layerWithColor(_ccColor4B *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x154);
  CCLayerColor((CCLayerColor *)this);
  if (this != (int *)0x0) {
    iVar1 = (**(code **)(*this + 300))(this,param_1);
    if (iVar1 == 0) {
      (**(code **)(*this + 8))(this);
      this = (int *)0x0;
    }
    else {
      CCObject::autorelease((CCObject *)this);
    }
  }
  return this;
}



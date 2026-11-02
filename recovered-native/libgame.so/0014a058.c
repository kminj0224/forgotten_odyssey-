/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a058  Symbol: layerWithColor */

/* cocos2d::CCLayerGradient::layerWithColor(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&,
   cocos2d::CCPoint const&) */

undefined8
cocos2d::CCLayerGradient::layerWithColor(_ccColor4B *param_1,_ccColor4B *param_2,CCPoint *param_3)

{
  int *this;
  int iVar1;
  _ccColor4B *p_Var2;
  CCPoint *pCVar3;
  
  p_Var2 = param_1;
  pCVar3 = param_3;
  this = (int *)operator_new(0x168);
  memset(this,0,0x168);
  CCLayerColor::CCLayerColor((CCLayerColor *)this);
  iVar1 = *(int *)(DAT_0014a0e8 + 0x14a084);
  *this = iVar1 + 8;
  this[0x3f] = iVar1 + 0x19c;
  this[0x40] = iVar1 + 0x1cc;
  this[0x41] = iVar1 + 0x1d8;
  this[0x44] = iVar1 + 0x1e8;
  this[0x45] = iVar1 + 0x208;
  CCPoint::CCPoint((CCPoint *)(this + 0x57));
  iVar1 = (**(code **)(*this + 0x158))(this,param_1,param_2,param_3,p_Var2,param_3,pCVar3);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return CONCAT44(p_Var2,this);
}



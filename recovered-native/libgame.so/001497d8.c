/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001497d8  Symbol: initWithColor */

/* cocos2d::CCLayerGradient::initWithColor(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&,
   cocos2d::CCPoint const&) */

void __thiscall
cocos2d::CCLayerGradient::initWithColor
          (CCLayerGradient *this,_ccColor4B *param_1,_ccColor4B *param_2,CCPoint *param_3)

{
  undefined4 local_14;
  _ccColor4B *p_Stack_10;
  
  this[DAT_00149830] = *(CCLayerGradient *)param_2;
  this[0x158] = *(CCLayerGradient *)(param_2 + 1);
  this[DAT_00149834] = *(CCLayerGradient *)(param_2 + 2);
  this[DAT_00149838] = *(CCLayerGradient *)(param_2 + 3);
  this[0x15a] = *(CCLayerGradient *)(param_1 + 3);
  *(CCPoint *)(this + 0x15c) = *param_3;
  *(CCPoint *)(this + 0x160) = param_3[1];
  this[0x164] = (CCLayerGradient)0x1;
  local_14 = CONCAT13(0xff,*(undefined3 *)param_1);
  p_Stack_10 = param_2;
  CCLayerColor::initWithColor((CCLayerColor *)this,(_ccColor4B *)&local_14);
  return;
}



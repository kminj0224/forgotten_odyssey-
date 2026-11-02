/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014918c  Symbol: initWithColor */

/* cocos2d::CCLayerGradient::initWithColor(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&)
    */

void cocos2d::CCLayerGradient::initWithColor(_ccColor4B *param_1,_ccColor4B *param_2)

{
  undefined4 in_r2;
  code *pcVar1;
  float in_s0;
  float in_s1;
  _ccColor4B *p_Stack_20;
  _ccColor4B *p_Stack_1c;
  
  pcVar1 = *(code **)(*(int *)param_1 + 0x158);
  p_Stack_20 = param_1;
  p_Stack_1c = param_2;
  CCPoint::CCPoint((CCPoint *)&p_Stack_20,in_s0,in_s1);
  (*pcVar1)(param_1,param_2,in_r2,&p_Stack_20);
  return;
}



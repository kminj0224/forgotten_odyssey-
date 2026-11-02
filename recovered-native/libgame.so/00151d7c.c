/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151d7c  Symbol: ribbonWithWidth */

/* cocos2d::CCRibbon::ribbonWithWidth(float, char const*, float, cocos2d::_ccColor4B const&, float)
    */

int * cocos2d::CCRibbon::ribbonWithWidth
                (float param_1,char *param_2,float param_3,_ccColor4B *param_4,float param_5)

{
  int *this;
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  
  this = (int *)operator_new(0x150);
  CCNode::CCNode((CCNode *)this);
  iVar1 = *(int *)(DAT_00151e00 + 0x151da0);
  *this = iVar1 + 8;
  this[0x3f] = iVar1 + 0x118;
  this[0x40] = 0;
  this[0x45] = 0;
  this[0x46] = 0;
  CCPoint::CCPoint((CCPoint *)(this + 0x47));
  CCPoint::CCPoint((CCPoint *)(this + 0x49));
  uVar2 = CCPoint::CCPoint((CCPoint *)(this + 0x4b));
  iVar1 = initWithWidth((CCRibbon *)this,(float)uVar2,param_2,(float)((ulonglong)uVar2 >> 0x20),
                        param_4,extraout_s2);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}



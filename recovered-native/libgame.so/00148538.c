/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00148538  Symbol: setAnchorPoint */

/* cocos2d::CCLabelBMFont::setAnchorPoint(cocos2d::CCPoint const&) */

void cocos2d::CCLabelBMFont::setAnchorPoint(CCPoint *param_1)

{
  int iVar1;
  CCPoint *in_r1;
  CCPoint *in_r2;
  
  iVar1 = CCPoint::CCPointEqualToPoint(in_r1,param_1 + 0x14,in_r2);
  if (iVar1 == 0) {
    CCNode::setAnchorPoint(param_1);
    createFontChars((CCLabelBMFont *)param_1);
  }
  return;
}



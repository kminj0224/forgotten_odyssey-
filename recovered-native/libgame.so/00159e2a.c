/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159e2a  Symbol: setPositionInPixels */

/* cocos2d::CCSprite::setPositionInPixels(cocos2d::CCPoint const&) */

void cocos2d::CCSprite::setPositionInPixels(CCPoint *param_1)

{
  CCNode::setPositionInPixels(param_1);
  if ((*(char *)(param_1 + 0x4a) != '\0') && (*(char *)((int)param_1 + 0x119) == '\0')) {
    *(undefined *)((int)param_1 + 0x119) = 1;
    *(undefined *)(param_1 + 0x46) = 1;
    if (*(char *)((int)param_1 + 0x11a) != '\0') {
      (**(code **)(*param_1 + 0x104))(param_1);
    }
  }
  return;
}



/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012c45c  Symbol: nextLayer */

/* LogoLayer::nextLayer() */

void __thiscall LogoLayer::nextLayer(LogoLayer *this)

{
  cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)this,true);
  **(undefined4 **)(DAT_0012c470 + 0x12c46c) = 6;
  return;
}



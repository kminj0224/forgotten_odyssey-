/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cc5f8  Symbol: EndAnimation */

/* StageSelect::EndAnimation() */

void __thiscall StageSelect::EndAnimation(StageSelect *this)

{
  **(undefined4 **)(DAT_000cc618 + 0xcc604) = 3;
  **(undefined4 **)(DAT_000cc61c + 0xcc60e) = 2;
  cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)this,true);
  return;
}



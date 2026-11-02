/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163a6a  Symbol: draw */

/* cocos2d::CCTMXLayer::draw() */

void cocos2d::CCTMXLayer::draw(void)

{
  CCSpriteBatchNode *in_r0;
  
  if (in_r0[0x144] != (CCSpriteBatchNode)0x0) {
    glEnable(0xbc0);
    glAlphaFunc(0x204,*(undefined4 *)(in_r0 + 0x148));
  }
  CCSpriteBatchNode::draw(in_r0);
  if (in_r0[0x144] != (CCSpriteBatchNode)0x0) {
    glDisable(0xbc0);
  }
  return;
}



/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b7bc  Symbol: setTexture */

/* cocos2d::CCSpriteBatchNode::setTexture(cocos2d::CCTexture2D*) */

void cocos2d::CCSpriteBatchNode::setTexture(CCTexture2D *param_1)

{
  (**(code **)(**(int **)(param_1 + 0x100) + 0x20))();
  updateBlendFunc((CCSpriteBatchNode *)param_1);
  return;
}



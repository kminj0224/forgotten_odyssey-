/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141a78  Symbol: setTexture */

/* cocos2d::CCAtlasNode::setTexture(cocos2d::CCTexture2D*) */

void cocos2d::CCAtlasNode::setTexture(CCTexture2D *param_1)

{
  (**(code **)(**(int **)(param_1 + 0x118) + 0x20))();
  updateBlendFunc((CCAtlasNode *)param_1);
  updateOpacityModifyRGB((CCAtlasNode *)param_1);
  return;
}



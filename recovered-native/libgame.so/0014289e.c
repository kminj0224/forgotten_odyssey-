/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014289e  Symbol: transformAncestors */

/* cocos2d::CCNode::transformAncestors() */

void __thiscall cocos2d::CCNode::transformAncestors(CCNode *this)

{
  if (*(CCNode **)(this + 0x74) != (CCNode *)0x0) {
    transformAncestors(*(CCNode **)(this + 0x74));
    transform(*(CCNode **)(this + 0x74));
  }
  return;
}



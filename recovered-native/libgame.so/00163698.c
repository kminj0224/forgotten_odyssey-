/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163698  Symbol: ~CCParallaxNode */

/* cocos2d::CCParallaxNode::~CCParallaxNode() */

CCParallaxNode * __thiscall cocos2d::CCParallaxNode::~CCParallaxNode(CCParallaxNode *this)

{
  int *__ptr;
  int iVar1;
  
  *(int *)this = *(int *)(DAT_001636e0 + 0x1636a2) + 8;
  __ptr = *(int **)(this + 0xfc);
  if (__ptr != (int *)0x0) {
    while( true ) {
      if (*__ptr == 0) break;
      iVar1 = *__ptr + -1;
      *__ptr = iVar1;
      CCObject::release(*(CCObject **)((int)(void *)__ptr[2] + iVar1 * 4));
    }
    free((void *)__ptr[2]);
    free(__ptr);
    *(undefined4 *)(this + 0xfc) = 0;
  }
  CCNode::~CCNode((CCNode *)this);
  return this;
}



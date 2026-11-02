/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141e10  Symbol: ~CCNode */

/* cocos2d::CCNode::~CCNode() */

CCNode * __thiscall cocos2d::CCNode::~CCNode(CCNode *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *(int *)this = *(int *)(DAT_00141e7c + 0x141e1a) + 8;
  if (*(CCObject **)(this + 0x44) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x44));
  }
  if (*(CCObject **)(this + 0x48) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x48));
  }
  if (((*(CCArray **)(this + 0x40) != (CCArray *)0x0) &&
      (iVar1 = CCArray::count(*(CCArray **)(this + 0x40)), iVar1 != 0)) &&
     (*(int *)(this + 0x40) != 0)) {
    piVar2 = *(int **)(*(int *)(this + 0x40) + 0x14);
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      piVar3 = (int *)piVar2[2];
      piVar2 = piVar3 + iVar1 + -1;
      while (piVar3 <= piVar2) {
        iVar1 = *piVar3;
        piVar3 = piVar3 + 1;
        if (iVar1 == 0) break;
        *(undefined4 *)(iVar1 + 0x74) = 0;
      }
    }
  }
  if (*(CCObject **)(this + 0x40) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x40));
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}



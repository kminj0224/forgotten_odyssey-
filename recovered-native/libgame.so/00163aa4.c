/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163aa4  Symbol: removeChild */

/* cocos2d::CCTMXLayer::removeChild(cocos2d::CCNode*, bool) */

void __thiscall cocos2d::CCTMXLayer::removeChild(CCTMXLayer *this,CCNode *param_1,bool param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  if (param_1 != (CCNode *)0x0) {
    uVar2 = *(uint *)(param_1 + 0x10c);
    *(undefined4 *)
     (*(int *)(*(int *)(*(int *)(this + 0x150) + 8) + uVar2 * 4) * 4 + *(int *)(this + 0x120)) = 0;
    puVar3 = *(uint **)(this + 0x150);
    uVar4 = *puVar3;
    *puVar3 = uVar4 - 1;
    iVar1 = uVar2 * 4;
    for (; uVar2 < uVar4 - 1; uVar2 = uVar2 + 1) {
      *(undefined4 *)(puVar3[2] + iVar1) = *(undefined4 *)(puVar3[2] + iVar1 + 4);
      iVar1 = iVar1 + 4;
    }
    CCSpriteBatchNode::removeChild((CCSpriteBatchNode *)this,param_1,param_2);
  }
  return;
}



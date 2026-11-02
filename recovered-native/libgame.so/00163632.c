/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163632  Symbol: removeChild */

/* cocos2d::CCParallaxNode::removeChild(cocos2d::CCNode*, bool) */

ulonglong __thiscall
cocos2d::CCParallaxNode::removeChild(CCParallaxNode *this,CCNode *param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  do {
    puVar4 = *(uint **)(this + 0xfc);
    if (*puVar4 <= uVar5) {
LAB_0016368a:
      CCNode::removeChild((CCNode *)this,param_1,param_2);
      return (ulonglong)CONCAT14(param_2,param_1);
    }
    iVar6 = uVar5 * 4;
    piVar1 = (int *)(**(code **)(**(int **)(puVar4[2] + iVar6) + 0x24))();
    iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
    if (iVar2 != 0) {
      puVar4 = *(uint **)(this + 0xfc);
      CCObject::release(*(CCObject **)(puVar4[2] + iVar6));
      uVar3 = *puVar4;
      *puVar4 = uVar3 - 1;
      iVar2 = (uVar3 - 1) - uVar5;
      if (iVar2 != 0) {
        memmove((void *)(puVar4[2] + iVar6),(void *)(puVar4[2] + (uVar5 + 1) * 4),iVar2 * 4);
      }
      goto LAB_0016368a;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}



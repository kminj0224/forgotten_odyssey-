/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b980  Symbol: addQuadFromSprite */

/* cocos2d::CCSpriteBatchNode::addQuadFromSprite(cocos2d::CCSprite*, unsigned int) */

void __thiscall
cocos2d::CCSpriteBatchNode::addQuadFromSprite
          (CCSpriteBatchNode *this,CCSprite *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  _ccV3F_C4B_T2F_Quad a_Stack_78 [100];
  
  do {
    uVar1 = (**(code **)(**(int **)(this + 0x100) + 0x18))();
    if (param_2 < uVar1) {
      iVar2 = (**(code **)(**(int **)(this + 0x100) + 0x18))();
      iVar3 = (**(code **)(**(int **)(this + 0x100) + 0x14))();
      if (iVar2 != iVar3) {
        CCSprite::useBatchNode(param_1,this);
        *(uint *)(param_1 + 0x10c) = param_2;
        memcpy(a_Stack_78,param_1 + 0x160,0x60);
        CCTextureAtlas::insertQuad(*(CCTextureAtlas **)(this + 0x100),a_Stack_78,param_2);
        param_1[0x118] = (CCSprite)0x1;
        CCSprite::updateTransform(param_1);
        return;
      }
    }
    increaseAtlasCapacity(this);
  } while( true );
}



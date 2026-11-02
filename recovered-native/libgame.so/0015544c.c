/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015544c  Symbol: initWithTotalParticles */

/* cocos2d::CCParticleSystemQuad::initWithTotalParticles(unsigned int) */

int __thiscall
cocos2d::CCParticleSystemQuad::initWithTotalParticles(CCParticleSystemQuad *this,uint param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CCRect *pCVar5;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar6;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
  float extraout_s3_00;
  CCRect aCStack_38 [4];
  CCRect aCStack_28 [5];
  
  iVar1 = CCParticleSystem::initWithTotalParticles((CCParticleSystem *)this,param_1);
  if (iVar1 != 0) {
    pvVar2 = operator_new__(*(int *)(this + 0x1dc) * 0x50);
    *(void **)(this + 0x1fc) = pvVar2;
    pvVar2 = operator_new__(*(int *)(this + 0x1dc) * 0xc);
    *(void **)(this + 0x200) = pvVar2;
    if (*(void **)(this + 0x1fc) != (void *)0x0) {
      if (pvVar2 != (void *)0x0) {
        if (*(int **)(this + 0x1e0) == (int *)0x0) {
          CCRect::CCRect((CCRect *)aCStack_28,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
          pCVar5 = aCStack_28;
        }
        else {
          uVar3 = (**(code **)(**(int **)(this + 0x1e0) + 0x18))();
          uVar4 = (**(code **)(**(int **)(this + 0x1e0) + 0x1c))();
          __floatunsisf(uVar3);
          uVar6 = __floatunsisf(uVar4);
          CCRect::CCRect((CCRect *)aCStack_38,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),
                         extraout_s2_00,extraout_s3_00);
          pCVar5 = aCStack_38;
        }
        initTexCoordsWithRect(this,pCVar5);
        initIndices(this);
        glEnable(DAT_00155544);
        glGenBuffers(1,this + 0x204);
        glBindBuffer(DAT_00155548,*(undefined4 *)(this + 0x204));
        glBufferData(DAT_00155548,*(int *)(this + 0x1dc) * 0x50,*(undefined4 *)(this + 0x1fc),
                     DAT_0015554c);
        glBindBuffer(DAT_00155548,0);
        return 1;
      }
      operator_delete__(*(void **)(this + 0x1fc));
    }
    if (*(void **)(this + 0x200) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x200));
    }
    CCObject::release((CCObject *)this);
    iVar1 = 0;
  }
  return iVar1;
}



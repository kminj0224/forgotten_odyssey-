/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00155204  Symbol: initTexCoordsWithRect */

/* cocos2d::CCParticleSystemQuad::initTexCoordsWithRect(cocos2d::CCRect const&) */

void __thiscall
cocos2d::CCParticleSystemQuad::initTexCoordsWithRect(CCParticleSystemQuad *this,CCRect *param_1)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  CCRect CVar8;
  undefined8 uVar9;
  float extraout_s2;
  float extraout_s3;
  CCRect local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  CVar8 = *param_1;
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __mulsf3(CVar8,uVar2);
  CVar8 = param_1[1];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __mulsf3(CVar8,uVar2);
  CVar8 = param_1[2];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __mulsf3(CVar8,uVar2);
  CVar8 = param_1[3];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar9 = __mulsf3(CVar8,uVar2);
  CCRect::CCRect((CCRect *)&local_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20),extraout_s2,
                 extraout_s3);
  local_30 = param_1[2];
  CVar8 = param_1[3];
  if (*(int **)(this + 0x1e0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1e0) + 0x18))();
    local_30 = __floatunsisf();
    (**(code **)(**(int **)(this + 0x1e0) + 0x1c))();
    CVar8 = __floatunsisf();
  }
  uVar2 = __divsf3(local_28,local_30);
  uVar3 = __divsf3(local_24,CVar8);
  uVar4 = __divsf3(local_20,local_30);
  uVar4 = __addsf3(uVar2,uVar4);
  uVar5 = __divsf3(local_1c,CVar8);
  uVar5 = __addsf3(uVar3,uVar5);
  iVar7 = 0;
  for (uVar6 = 0; uVar6 < *(uint *)(this + 0x1dc); uVar6 = uVar6 + 1) {
    *(undefined4 *)(*(int *)(this + 0x1fc) + iVar7 + 0xc) = uVar2;
    *(undefined4 *)(*(int *)(this + 0x1fc) + iVar7 + 0x10) = uVar5;
    *(undefined4 *)(*(int *)(this + 0x1fc) + iVar7 + 0x20) = uVar4;
    *(undefined4 *)(*(int *)(this + 0x1fc) + iVar7 + 0x24) = uVar5;
    *(undefined4 *)(*(int *)(this + 0x1fc) + iVar7 + 0x34) = uVar2;
    *(undefined4 *)(*(int *)(this + 0x1fc) + iVar7 + 0x38) = uVar3;
    *(undefined4 *)(*(int *)(this + 0x1fc) + iVar7 + 0x48) = uVar4;
    *(undefined4 *)(*(int *)(this + 0x1fc) + iVar7 + 0x4c) = uVar3;
    iVar7 = iVar7 + 0x50;
  }
  return;
}



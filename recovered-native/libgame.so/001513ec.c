/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001513ec  Symbol: draw */

/* cocos2d::CCRibbonSegment::draw(float, float, cocos2d::_ccColor4B const&) */

undefined8 __thiscall
cocos2d::CCRibbonSegment::draw
          (CCRibbonSegment *this,float param_1,float param_2,_ccColor4B *param_3)

{
  CCRibbonSegment CVar1;
  CCRibbonSegment CVar2;
  CCRibbonSegment CVar3;
  int iVar4;
  int iVar5;
  CCRibbonSegment CVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 in_r2;
  CCRibbonSegment *in_r3;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  int local_34;
  
  iVar4 = DAT_00151584;
  uVar15 = CONCAT44(param_2,param_1);
  CVar1 = *in_r3;
  CVar2 = in_r3[1];
  CVar3 = in_r3[2];
  CVar6 = in_r3[3];
  if (*(uint *)(this + DAT_00151584) < 0x32) {
    iVar7 = __aeabi_fcmpeq(param_3,0);
    if (iVar7 == 0) {
      glEnableClientState(DAT_0015158c);
      uVar14 = *(uint *)(this + iVar4);
      uVar13 = *(uint *)(this + 0xa40);
      local_34 = uVar14 << 3;
      for (; iVar7 = DAT_00151594, uVar14 < uVar13; uVar14 = uVar14 + 1) {
        iVar12 = DAT_00151590 + local_34;
        this[iVar12] = CVar1;
        iVar5 = DAT_00151598;
        this[iVar7 + local_34 + 4] = CVar2;
        this[iVar5 + local_34 + 4] = CVar3;
        iVar7 = DAT_0015159c;
        (this + iVar12)[4] = CVar1;
        iVar12 = DAT_001515a0;
        this[iVar7 + local_34 + 4] = CVar2;
        iVar7 = DAT_001515a4;
        this[iVar12 + local_34 + 4] = CVar3;
        uVar8 = __subsf3(param_3,*(undefined4 *)(this + iVar7 + uVar14 * 4));
        uVar8 = __divsf3(uVar8,in_r2);
        iVar12 = __aeabi_fcmpgt(uVar8,0x3f800000);
        iVar7 = DAT_001515a8;
        if (iVar12 == 0) {
          uVar8 = __mulsf3(uVar8,DAT_00151588);
          __subsf3(DAT_00151588,uVar8);
          CVar6 = (CCRibbonSegment)__fixunssfsi();
          iVar7 = DAT_001515ac + local_34;
          this[DAT_001515a8 + local_34 + 4] = CVar6;
          this[iVar7 + 4] = CVar6;
        }
        else {
          *(int *)(this + iVar4) = *(int *)(this + iVar4) + 1;
          this[iVar7 + local_34 + 4] = (CCRibbonSegment)0x0;
          this[DAT_001515ac + local_34 + 4] = (CCRibbonSegment)0x0;
        }
        local_34 = local_34 + 8;
      }
      glColorPointer(4,DAT_001515b0,0,this + DAT_00151590 + *(int *)(this + iVar4) * 8);
    }
    else {
      uVar8 = __floatunsisf(CVar1);
      uVar8 = __divsf3(uVar8,DAT_00151588);
      uVar9 = __floatunsisf(CVar2);
      uVar9 = __divsf3(uVar9,DAT_00151588);
      uVar10 = __floatunsisf(CVar3);
      uVar10 = __divsf3(uVar10,DAT_00151588);
      uVar11 = __floatunsisf(CVar6);
      uVar11 = __divsf3(uVar11,DAT_00151588);
      glColor4f(uVar8,uVar9,uVar10,uVar11);
    }
    glVertexPointer(3,DAT_001515b4,0,this + (*(int *)(this + iVar4) * 6 + 4) * 4 + 4);
    glTexCoordPointer(2,DAT_001515b4,0,this + DAT_001515b8 + *(int *)(this + iVar4) * 0x10);
    uVar15 = glDrawArrays(5,0,(*(int *)(this + 0xa40) - *(int *)(this + iVar4)) * 2);
  }
  else {
    this[DAT_001515bc] = (CCRibbonSegment)0x1;
  }
  return uVar15;
}



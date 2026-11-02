/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00105290  Symbol: Unit_Movey_init */

/* Unit_Money::Unit_Movey_init(char const*, cocos2d::CCPoint, int, int, unsigned int, int) */

void __thiscall
Unit_Money::Unit_Movey_init
          (Unit_Money *this,char *param_1,CCPoint param_2,int param_3,int param_4,uint param_5,
          int param_6)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  uint uVar9;
  float extraout_s2;
  float extraout_s3;
  undefined8 uVar10;
  int local_84;
  int local_80;
  CCPoint aCStack_54 [8];
  CCRect aCStack_4c [3];
  byte abStack_3d [33];
  int local_1c;
  
  piVar8 = *(int **)(DAT_001053d0 + 0x10529c);
  local_1c = *piVar8;
  sprintf((char *)(abStack_3d + 1),(char *)(DAT_001053d4 + 0x1052aa),param_6);
  local_80 = 0;
  for (local_84 = param_6; local_84 != 0; local_84 = local_84 - (bVar1 - 0x30)) {
    uVar9 = 0;
    while( true ) {
      if (abStack_3d[uVar9 + 1] == 0) break;
      uVar9 = uVar9 + 1 & -(uint)(uVar9 != 0x1d);
    }
    if (uVar9 == 0) break;
    bVar1 = abStack_3d[uVar9];
    uVar10 = __floatsidf(bVar1 - 0x30);
    __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_001053c8,DAT_001053cc);
    uVar10 = __truncdfsf2();
    cocos2d::CCRect::CCRect
              ((CCRect *)aCStack_4c,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20),extraout_s2,
               extraout_s3);
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile(param_1,aCStack_4c);
    pcVar7 = *(code **)(*piVar2 + 0x3c);
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
    uVar4 = __addsf3(param_2,*puVar3);
    uVar4 = __mulsf3(uVar4,0x3f000000);
    uVar4 = __addsf3(uVar4,DAT_001053e0);
    uVar5 = __floatsisf(local_80);
    __subsf3(uVar4,uVar5);
    iVar6 = (**(code **)(*piVar2 + 0x7c))(piVar2);
    uVar4 = __subsf3(param_3 + -0x80000000,*(undefined4 *)(iVar6 + 4));
    uVar10 = __mulsf3(uVar4,0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_54,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    (*pcVar7)(piVar2,aCStack_54);
    (**(code **)(*(int *)this + 0xcc))(this,piVar2,uVar9,uVar9);
    abStack_3d[uVar9] = 0;
    local_80 = local_80 + 8;
  }
  if (local_1c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}



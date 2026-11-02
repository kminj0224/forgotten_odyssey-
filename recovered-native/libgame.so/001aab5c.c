/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001aab5c  Symbol: FUN_001aab5c */

void FUN_001aab5c(int *param_1,char *param_2,uint param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = param_4 + param_3;
  if (0xd < param_3) {
    if ((*param_2 != 'J') || (param_2[1] != 'F')) goto LAB_001aab6e;
    cVar4 = param_2[2];
    if (cVar4 != 'I') goto LAB_001aaba4;
    if ((param_2[3] != 'F') || (param_2[4] != '\0')) goto LAB_001aab6e;
    param_1[0x47] = 1;
    cVar4 = param_2[5];
    *(char *)(param_1 + 0x48) = cVar4;
    iVar5 = DAT_001aacf0;
    *(char *)((int)param_1 + DAT_001aacf0) = param_2[6];
    *(char *)((int)param_1 + 0x122) = param_2[7];
    *(ushort *)(param_1 + 0x49) = (ushort)(byte)param_2[8] * 0x100 + (ushort)(byte)param_2[9];
    *(ushort *)((int)param_1 + 0x126) =
         (ushort)(byte)param_2[10] * 0x100 + (ushort)(byte)param_2[0xb];
    if (cVar4 != '\x01') {
      *(undefined4 *)(*param_1 + 0x14) = 0x7a;
      *(uint *)(*param_1 + 0x18) = (uint)*(byte *)(param_1 + 0x48);
      bVar1 = *(byte *)((int)param_1 + iVar5);
      *(uint *)(*param_1 + 0x1c) = (uint)bVar1;
      (**(code **)(*param_1 + 4))(param_1,0xffffffff,(uint)bVar1,*(code **)(*param_1 + 4),param_4);
    }
    iVar5 = *param_1;
    *(uint *)(iVar5 + 0x18) = (uint)*(byte *)(param_1 + 0x48);
    *(uint *)(iVar5 + 0x1c) = (uint)*(byte *)((int)param_1 + DAT_001aacf0);
    *(uint *)(iVar5 + 0x20) = (uint)*(ushort *)(param_1 + 0x49);
    *(uint *)(iVar5 + 0x24) = (uint)*(ushort *)((int)param_1 + 0x126);
    *(uint *)(iVar5 + 0x28) = (uint)*(byte *)((int)param_1 + 0x122);
    *(undefined4 *)(*param_1 + 0x14) = 0x59;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (param_2[0xd] == '\0') {
      uVar6 = (uint)(byte)param_2[0xc];
      uVar3 = 0;
      if (uVar6 != 0) goto LAB_001aac8c;
    }
    else {
LAB_001aac8c:
      *(undefined4 *)(*param_1 + 0x14) = 0x5c;
      *(uint *)(*param_1 + 0x18) = (uint)(byte)param_2[0xc];
      *(uint *)(*param_1 + 0x1c) = (uint)(byte)param_2[0xd];
      (**(code **)(*param_1 + 4))(param_1,1);
      uVar6 = (uint)(byte)param_2[0xc];
      uVar3 = (uint)(byte)param_2[0xd];
    }
    if (uVar3 * uVar6 * 3 == iVar7 + -0xe) {
      return;
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x5a;
    *(int *)(*param_1 + 0x18) = iVar7 + -0xe;
    goto LAB_001aab78;
  }
  if (((param_3 < 6) || (*param_2 != 'J')) || (param_2[1] != 'F')) {
LAB_001aab6e:
    iVar5 = *param_1;
    uVar2 = 0x4f;
  }
  else {
    cVar4 = param_2[2];
LAB_001aaba4:
    if (((cVar4 != 'X') || (param_2[3] != 'X')) || (param_2[4] != '\0')) goto LAB_001aab6e;
    cVar4 = param_2[5];
    if (cVar4 == '\x11') {
      *(undefined4 *)(*param_1 + 0x14) = 0x6f;
      *(int *)(*param_1 + 0x18) = iVar7;
      goto LAB_001aab78;
    }
    if (cVar4 != '\x13') {
      if (cVar4 == '\x10') {
        *(undefined4 *)(*param_1 + 0x14) = 0x6e;
        *(int *)(*param_1 + 0x18) = iVar7;
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x5b;
        *(uint *)(*param_1 + 0x18) = (uint)(byte)param_2[5];
        *(int *)(*param_1 + 0x1c) = iVar7;
      }
      goto LAB_001aab78;
    }
    iVar5 = *param_1;
    uVar2 = 0x70;
  }
  *(undefined4 *)(iVar5 + 0x14) = uVar2;
  *(int *)(*param_1 + 0x18) = iVar7;
LAB_001aab78:
  (**(code **)(*param_1 + 4))(param_1,1);
  return;
}



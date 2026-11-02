/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00208f90  Symbol: FUN_00208f90 */

int * FUN_00208f90(int param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    do {
      switch(*param_2) {
      case 0:
        return (int *)0x0;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        if (*(int *)(param_1 + 0x114) == 0) {
          *(undefined4 *)(param_1 + 0x11c) = 1;
          return (int *)0x0;
        }
        iVar3 = param_2[1];
        piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x114) + 4) + 8);
        if (piVar2 == (int *)0x0) goto LAB_0020914c;
        if (*piVar2 != 0x2b) {
          return (int *)0x0;
        }
        if (0 < iVar3) goto LAB_0020913c;
        bVar1 = false;
        goto LAB_00209150;
      case 6:
        return (int *)0x0;
      case 7:
        goto LAB_002090cc;
      case 8:
        goto LAB_002090cc;
      case 9:
        break;
      case 10:
        break;
      case 0xb:
        break;
      case 0xc:
        break;
      case 0xd:
        break;
      case 0xe:
        break;
      case 0xf:
        break;
      case 0x10:
        break;
      case 0x11:
        break;
      case 0x12:
        break;
      case 0x13:
        break;
      case 0x14:
        break;
      case 0x15:
        break;
      case 0x16:
        return (int *)0x0;
      case 0x17:
        break;
      case 0x18:
        break;
      case 0x19:
        break;
      case 0x1a:
        break;
      case 0x1b:
        break;
      case 0x1c:
        break;
      case 0x1d:
        break;
      case 0x1e:
        break;
      case 0x1f:
        break;
      case 0x20:
        break;
      case 0x21:
        break;
      case 0x22:
        break;
      case 0x23:
        return (int *)0x0;
      case 0x24:
        break;
      case 0x25:
        break;
      case 0x26:
        break;
      case 0x27:
        break;
      case 0x28:
        break;
      case 0x29:
        break;
      case 0x2a:
        break;
      case 0x2b:
        break;
      case 0x2c:
        return (int *)0x0;
      case 0x2d:
        goto LAB_002090cc;
      case 0x2e:
        break;
      case 0x2f:
        break;
      case 0x30:
        break;
      case 0x31:
        break;
      case 0x32:
        break;
      case 0x33:
        break;
      case 0x34:
        break;
      case 0x35:
        break;
      case 0x36:
        break;
      case 0x37:
        break;
      case 0x38:
        break;
      case 0x39:
        return (int *)0x0;
      case 0x3a:
        break;
      case 0x3b:
        break;
      case 0x3c:
        break;
      case 0x3d:
        break;
      case 0x3e:
        return (int *)0x0;
      case 0x3f:
        break;
      case 0x40:
        break;
      case 0x41:
        return (int *)0x0;
      }
      piVar2 = (int *)FUN_00208f90(param_1,param_2[1]);
      if (piVar2 != (int *)0x0) {
        return piVar2;
      }
LAB_002090cc:
      param_2 = (int *)param_2[2];
    } while (param_2 != (int *)0x0);
  }
  return param_2;
LAB_0020914c:
  bVar1 = true;
LAB_00209150:
  if (iVar3 != 0) {
    bVar1 = true;
  }
  if (bVar1) {
    return (int *)0x0;
  }
  goto LAB_0020916c;
  while( true ) {
    if (*piVar2 != 0x2b) {
      return (int *)0x0;
    }
    if (iVar3 == 0) break;
LAB_0020913c:
    piVar2 = (int *)piVar2[2];
    iVar3 = iVar3 + -1;
    if (piVar2 == (int *)0x0) goto LAB_0020914c;
  }
LAB_0020916c:
  piVar2 = (int *)piVar2[1];
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  if (*piVar2 != 0x2b) {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



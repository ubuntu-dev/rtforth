extern crate rtforth;
use rtforth::core::Core;
use rtforth::tools::Tools;
use rtforth::vm::VM;

#[test]
fn test_primitives() {
    let vm = &mut VM::new(1024, 1024);
    vm.add_core();
    vm.noop();
    vm.p_false();
    assert_eq!(vm.s_stack().len(), 1);
    assert_eq!(vm.s_stack().last(), Some(0));
    vm.p_true();
    assert_eq!(vm.s_stack().len(), 2);
    assert_eq!(vm.s_stack().last(), Some(-1));
    vm.s_stack().push(2);
    assert_eq!(vm.s_stack().len(), 3);
    vm.dot_s();
    vm.words();
}

Foo get_foo(const char *msg) {
    struct newFoo: Foo {
        public:
        newFoo(const char *msg) : Foo(msg) { }
    };
    newFoo f = newFoo(msg);
    return f;
}
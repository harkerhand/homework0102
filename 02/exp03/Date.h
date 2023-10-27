class Date
{
public:
    explicit Date(int, int, int);
    void setYear(int);
    void setMonth(int);
    void setDay(int);
    void displayDate() const;

private:
    int year, month, day;
};
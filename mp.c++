public class Flight
{
    public string FlightNumber { get; set; }
    public string Departure { get; set; }
    public string Arrival { get; set; }
    public DateTime DepartureTime { get; set; }
    public DateTime ArrivalTime { get; set; }
    public decimal Price { get; set; }
}

public List<Flight> SearchFlights(string departure, string arrival, DateTime departureDate)
{
    // هذه الطريقة تعتمد على قاعدة بيانات أو API خارجي
    List<Flight> flights = new List<Flight>();

    // على سبيل المثال، إضافة بيانات ثابتة
    flights.Add(new Flight
    {
        FlightNumber = "XY123",
        Departure = departure,
        Arrival = arrival,
        DepartureTime = departureDate.AddHours(10),
        ArrivalTime = departureDate.AddHours(13),
        Price = 299.99m
    });

    return flights;
}
